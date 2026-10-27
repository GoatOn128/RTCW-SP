# Renderer port progress

Legend: ⬜ todo · 🚧 in progress · ✅ done

Overall goal: port the Doom 3 BFG renderer (references/doom3bfg) onto this
engine's Q3 BSP and RTCW asset formats, using the vendored glad loader and
the ported idlib subset. The references/ tree is read-only reference
material and is never modified.

## Phases

✅ Phase 1 - idlib subset
   Port the idlib foundation the BFG renderer is written against: the
   system headers, Heap, Str, containers, math, bounding volumes and the
   geometry types. Builds as a static library on every CI config.
   Deferred to later phases: RenderMatrix.cpp (the blob cannot be
   fetched through the API), the SIMD processor, the parser and dict
   files.

✅ Phase 2 - renderer module skeleton
   A new renderer module with its glad context, the surface and area
   structures, and the idRenderWorld API shape. RenderMatrix.cpp lands
   here. Builds as the renderer_bfg shared library on every CI config.
   Deferred to later phases: the RenderScene backend, map loading,
   tracing, decals and overlays, the demo code, FindPortal and the
   winding code.

✅ Phase 3 - GLSL backend
   The idlib token, lexer and parser, the cvar, matrix and render log
   support files, and the idRenderProgManager with the CG to GLSL
   converter and the builtin shader table. Builds green on every CI
   config. Deferred to later phases: the material stages (Material
   needs the decl manager and idImage), the RenderScene backend and
   the view structures, the full render log (needs the engine file
   system), the reloadShaders command hookup and the GLSL file cache.
   The shader loader reads the CG sources from a renderprogs directory
   next to the working directory; references/doom3bfg-renderprogs holds
   them as reference data, the install location is decided by the
   engine integration phase.

✅ Phase 4 - Q3 BSP adapter
   The Q3 BSP on-disk structures with size checks, the patch
   subdivision ported from this repo's own tr_curve.c, and the
   RenderWorld_load.cpp loader behind InitFromMap: shaders,
   surfaces, patches, flares, leafs, area nodes, models, vis and
   lightmaps feed the BFG idRenderWorld structures. The BFG area
   nodes are built from the BSP tree and every BSP area gets its
   own portal area, all flooded connected. The lightmaps stay raw
   on the world, the image phase uploads them. Builds green on
   every CI config. Deferred to later phases: the area portal
   windings and the SetPortalState hookup (need the CM areaportal
   data, engine integration), the lightmap upload (image phase),
   moving the loaded surfaces into render models (model adapter
   phase), the map time stamp fast reload and trace and decal
   support on the BSP data. The loader reads the .bsp file from
   the working directory with stdio until the engine file system
   is hooked up.

✅ Phase 5 - model adapters
   The BFG idRenderModelStatic base and the render model manager, the
   MD3, MDC and MDS adapters for the RTCW model formats, and the BSP
   models converted into local render models: model 0 keeps the map
   name, the submodels follow the Q3 bmodel convention *<num>. The
   adapters decode the RTCW on-disk layouts with size checks: MD3
   animates between frames through the MD3 frame shader parms, MDC
   decompresses every frame into plain surfaces at load, MDS bakes the
   frame 0 bind pose into static surfaces with the bone matrices from
   this repo's own tr_animation.c. Vertex normals decode exactly like
   the engine renderer (lat/long for MD3, the compressed ofVec normal
   table for MDC). Builds green on every CI config. Deferred to later
   phases: the MDS skeletal animation and skinning beyond the bind
   pose, the MD3 and MDC tags and MD3 LOD files, the MDS
   fixedParent/fixedDist paths, the MD5 formats, resolving the shader
   names to materials (material phase) and replacing the direct stdio
   reads with the engine file system.

✅ Phase 6 - shader file translation
   The material data model and the material manager following the
   module's model manager shape, and the .shader script translation
   ported from this repo's own tr_shader.c: ParseShader and ParseStage
   with the deform, waveform, texmod, sky, sort and surfaceparm
   helpers keep the engine keyword behavior, so the existing scripts
   parse with their original meaning. The script files are scanned
   from a scripts directory next to the working directory and indexed
   in one combined text block; a material is defined lazily from the
   matching definition on the first lookup, the first definition wins,
   and a failed parse becomes the not-drawn default material like the
   engine does. One material per name serves all non-negative lightmap
   indexes: this renderer binds the surface lightmap at draw time
   instead of baking it into per-index shaders. The surfaces of the
   BSP local models and the MD3, MDC and MDS adapters resolve their
   stored shader names through the manager, with the surface lightmap
   index clamped to vertex lighting beyond the world lightmaps. A name
   without a definition gets the texture-only fallback of R_FindShader.
   Builds green on every CI config. Deferred to later phases: the
   images the stages name (image phase), a decl manager proper, the
   fog, sun and lightgrid keywords (fog/light phases), the state
   shader time clamping, the texture compression keywords, the
   multitexture and vertex lighting collapse, the stage iterator,
   the videoMap playback and the detail texture cvar filtering
   (frontend).

✅ Phase 7 - lighting decision
   Lightmaps first, shadow maps optional later. The image manager
   follows the create and find semantics of this repo's own
   R_FindImageFile and R_CreateImageExt: the TGA loader is ported,
   the JPEG loader goes through the vendored stb_image, and the
   builtin images (default, white, identityLight, dlight, fog)
   match the engine's R_CreateBuiltinImages. The pixel pipeline of
   the engine's Upload32 (resample, picmip, mip chain, light scale,
   internal format) runs on the CPU at image creation and the
   prepared levels wait for the backend: this renderer has no live
   GL context until then, so nothing touches GL at load time. The
   BSP loader turns the lightmap lump into lightmap images with the
   overbright color shift of R_LoadLightmaps, gated by r_vertexLight.
   The shader keywords Phase 6 deferred now have their homes: the
   sun, fog and lightgrid values sit on the material manager like
   the engine's tr structure, clampTime sits on the material, and
   allowcompress and nocompress drive the image compression control
   of the image manager. The stage collapses of FinishShader are
   ported too: the detail stage filtering through r_detailtextures,
   the vertex lighting collapse and the multitexture collapse with
   two bundles per stage. Builds green on every CI config.
   Deferred to later phases: the GL upload and the lightmap binding
   at draw time (backend), the runtime fog, sun and lightgrid
   consumers (frontend), the videoMap playback (the client cinematic
   system, the BFG renderer plays Bink), the pcx and bmp loaders of
   the engine, the map change image purge (engine integration) and
   a decl manager proper (out of scope for this port).

✅ Phase 8 - stencil shadow pass
   The planar projection stencil shadows of this repo's own
   tr_shadows.c: the silhouette edge list of the tesselated surface,
   the shadow volume pass projecting the vertexes away from the entity
   light direction, the stencil darkening of RB_ShadowFinish and the
   projection shadow deform of the DEFORM_PROJECTION_SHADOW stages.
   The GL state function and the GLS state bits come from
   tr_backend.c and tr_local.h, and the cg_shadows cvar keeps the
   engine default, value 2 selects the stencil pass. The shadow code
   runs on a dormant backend slice (tess, backEnd, glState, glConfig)
   because the module has no live GL context until the backend phase,
   which wires RB_ShadowTessEnd into the surface end, RB_ShadowFinish
   into the view draw loop, the projection deform into the deform
   stages and the stencil clear bit into the frame buffer clear.
   Builds green on every CI config. Deferred to the backend phase:
   the full tesselator and backend state these functions run on, the
   entity light direction setup (frontend lighting), the shadow
   shader assignment of the engine (its tr.shadowShader stays NULL
   there, the shadow surfaces route through RB_ShadowTessEnd instead)
   and the mirror view flag of the view parameters.

✅ Phase 9 - backend state and tesselator
   The backend the stage iterators run on: the backEndState_t,
   glstate_t and view parameter slices of tr_local.h, the trRefdef,
   refEntity and orientation structures, the wave form tables and
   the noise of R_Init, and the GL helpers of tr_backend.c and
   tr_init.c (GL_State, GL_Bind, GL_SelectTexture, GL_TexEnv, GL_Cull,
   GL_SetDefaultState). The shaderCommands_t tesselator and the back
   end of tr_shade.c: RB_BeginSurface and RB_EndSurface frame a
   batch, the stage iterators compute the colors and texture
   coordinates of every pass and issue the GL drawing calls, and the
   iterator selection of ComputeStageIteratorFunc is wired into
   idMaterial::Finish with the optimal iterator member of the engine
   shader. The calculators of tr_shade_calc.c port the wave, deform,
   color and texture coordinate math, and the overflow flush and the
   quad stamps of tr_surface.c build the text and sprite deform
   geometry. The shadow pass now reads the real tesselator, and the
   world entity global sits on the backend for the sprite deforms
   until the front end global lands. Everything is dormant: the
   module has no live GL context and no surface functions until the
   backend draw phase wires the draw loop. Builds green on every CI
   config. Deferred to later phases, documented at each call site:
   the dynamic light projection (dlight phase), the fog pass, the
   fog texture coordinate and fog color calculators (fog phase), the
   sky iterator and the portal sky filter (sky phase), the shader
   remap and the compiled vertex array lock of the engine (dropped,
   this renderer has no such extension), the ATI pn_triangles
   tesselation (dropped) and the videoMap playback (client
   integration).

✅ Phase 10 - light grid and entity lighting
   The entity lighting of this repo's own tr_light.c: the light grid
   trilerp of R_SetupEntityLightingGrid, the minlight, hilight and sun
   fallbacks of R_SetupEntityLighting, the R_LightForPoint query, and
   the r_ambientScale, r_directedScale and r_debugLight cvars with the
   engine defaults. The BSP adapter loads the light grid lump like the
   engine's R_LoadLightGrid: the grid size defaults to 64x64x128, the
   worldspawn gridsize key overrides it like R_LoadEntities, the grid
   bounds come off the world model like the engine's neutralized
   R_FindLightGridBounds, and every sample gets the overbright color
   shift of the lightmap upload; a mismatched lump leaves the world
   without a grid. The world global r_worldBsp stands in for the
   engine's tr.world until the scene phase owns it, and the material
   manager exposes the sun direction and the lightgrid multipliers the
   engine keeps in its tr structure. Everything stays dormant until
   the scene phase calls R_SetupEntityLighting per entity. Builds
   green on every CI config. Deferred to the dynamic light phase,
   documented at the call sites: the dlight block of
   R_SetupEntityLighting, R_TransformDlights and R_DlightBmodel.

## Notes

- License: the ported idlib files are Doom 3 BFG code, which is GPLv3.
  The rest of this repo is GPLv2 or later, so combining the two makes the
  combined work effectively GPLv3. Prefer reimplementing over verbatim
  copying when in doubt.
- glad is already vendored under src/third-party/glad (glad 2.0.8,
  GL 3.3 compatibility profile, ALIAS mode).
- idlib printing and errors go to stdout and stderr until the engine is
  hooked up by the engine integration phase.
