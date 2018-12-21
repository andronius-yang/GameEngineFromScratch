#include "OpenGLESShaderManager.hpp"

#define VS_BASIC_SOURCE_FILE "Shaders/OpenGLES/basic.vert.glsl"
#define PS_BASIC_SOURCE_FILE "Shaders/OpenGLES/basic.frag.glsl"
#define VS_SHADOWMAP_SOURCE_FILE "Shaders/OpenGLES/shadowmap.vert.glsl"
#define PS_SHADOWMAP_SOURCE_FILE "Shaders/OpenGLES/shadowmap.frag.glsl"
#define VS_OMNI_SHADOWMAP_SOURCE_FILE "Shaders/OpenGLES/shadowmap_omni.vert.glsl"
#define PS_OMNI_SHADOWMAP_SOURCE_FILE "Shaders/OpenGLES/shadowmap_omni.frag.glsl"
#define GS_OMNI_SHADOWMAP_SOURCE_FILE "Shaders/OpenGLES/shadowmap_omni.geom.glsl"
#define DEBUG_VS_SHADER_SOURCE_FILE "Shaders/OpenGLES/debug.vert.glsl"
#define DEBUG_PS_SHADER_SOURCE_FILE "Shaders/OpenGLES/debug.frag.glsl"
#define VS_PASSTHROUGH_SOURCE_FILE "Shaders/OpenGLES/passthrough.vert.glsl"
#define PS_SIMPLE_TEXTURE_SOURCE_FILE "Shaders/OpenGLES/depthtexture.frag.glsl"
#define VS_PASSTHROUGH_CUBEMAP_SOURCE_FILE "Shaders/OpenGLES/passthrough_cube.vert.glsl"
#define PS_SIMPLE_DEPTH_CUBEMAP_SOURCE_FILE "Shaders/OpenGLES/depthcubemap.frag.glsl"
#define PS_SIMPLE_CUBEMAP_SOURCE_FILE "Shaders/OpenGLES/cubemap.frag.glsl"
#define VS_SKYBOX_SOURCE_FILE "Shaders/OpenGLES/skybox.vert.glsl"
#define PS_SKYBOX_SOURCE_FILE "Shaders/OpenGLES/skybox.frag.glsl"
#define VS_PBR_SOURCE_FILE "Shaders/OpenGL/pbr.vert.glsl"
#define PS_PBR_SOURCE_FILE "Shaders/OpenGLES/pbr.frag.glsl"

#include "OpenGLShaderManagerCommonBase.cpp"