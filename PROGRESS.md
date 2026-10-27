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

⬜ Phase 6 - shader file translation
   Translate the .shader script files to the BFG material system.

⬜ Phase 7 - lighting decision
   Lightmaps first, shadow maps optional later.

## Notes

- License: the ported idlib files are Doom 3 BFG code, which is GPLv3.
  The rest of this repo is GPLv2 or later, so combining the two makes the
  combined work effectively GPLv3. Prefer reimplementing over verbatim
  copying when in doubt.
- glad is already vendored under src/third-party/glad (glad 2.0.8,
  GL 3.3 compatibility profile, ALIAS mode).
- idlib printing and errors go to stdout and stderr until the engine is
  hooked up by the engine integration phase.
