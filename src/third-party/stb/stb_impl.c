/*
Single translation unit that pulls in the stb implementations used
by the renderer: image loading (jpg/png/tga/bmp...), image writing
(jpg screenshots) and truetype font rendering. dr_pcx from the
drlibs folder supplies the pcx decoder; it is public domain (unlicense).

The stb headers are public domain / MIT dual licensed (see the
license block at the bottom of each header), taken verbatim from
the nvpro-samples "nv/all-fixes" fork of the upstream repository.
*/

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_TRUETYPE_IMPLEMENTATION
#define DR_PCX_IMPLEMENTATION
#include "stb_image.h"
#include "stb_image_write.h"
#include "stb_truetype.h"
#include "dr_pcx.h"
