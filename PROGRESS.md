# Renderer port progress

Legend: ⬜ todo · 🚧 in progress · ✅ done

Overall goal: port the Doom 3 BFG renderer (references/doom3bfg) onto this
engine's Q3 BSP and RTCW asset formats, using the vendored glad loader and
the ported idlib subset. The references/ tree is read-only reference
material and is never modified.

## Phases

🚧 Phase 1 - idlib subset
   Port the idlib foundation the BFG renderer is written against: the
   system headers, Heap, Str, containers, math, bounding volumes and the
   geometry types. Builds as a static library on every CI config.
   Deferred to later phases: RenderMatrix.cpp (the blob cannot be
   fetched through the API), the SIMD processor, the parser and dict
   files.

⬜ Phase 2 - renderer module skeleton
   A new renderer module with its glad context, the surface and area
   structures, and the idRenderWorld API shape. RenderMatrix.cpp lands
   here.

⬜ Phase 3 - GLSL backend
   Shader programs and material stages on top of the BFG GLSL paths.

⬜ Phase 4 - Q3 BSP adapter
   Load the RTCW .bsp files: surfaces, patches, lightmaps and vis data
   feeding the BFG idRenderWorld structures. The lightmaps stay.

⬜ Phase 5 - model adapters
   The MD3, MDS and MDC model formats into the BFG render model code.

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
  hooked up in phase 2.
