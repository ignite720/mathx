#ifndef __MATHX_VK_H__
#define __MATHX_VK_H__

#define MATHX_VK_BOOL                                           MATHX_VK_UINT
#define MATHX_VK_FLOAT                                          float
#define MATHX_VK_UINT64                                         uint64_t

#ifdef __cplusplus

#include <cstdint>

#define MATHX_VK_VEC2                                           Vector2f
#define MATHX_VK_VEC3                                           Vector3f
#define MATHX_VK_VEC4                                           Vector4f

#define MATHX_VK_INT                                            int32_t
#define MATHX_VK_IVEC2                                          Vector2i
#define MATHX_VK_IVEC3                                          Vector3i
#define MATHX_VK_IVEC4                                          Vector4i

#define MATHX_VK_UINT                                           uint32_t
#define MATHX_VK_UVEC2                                          Vector2u
#define MATHX_VK_UVEC3                                          Vector3u
#define MATHX_VK_UVEC4                                          Vector4u

#define MATHX_VK_MAT4                                           Matrix4x4f

#else

#define MATHX_VK_VEC2                                           vec2
#define MATHX_VK_VEC3                                           vec3
#define MATHX_VK_VEC4                                           vec4

#define MATHX_VK_INT                                            int
#define MATHX_VK_IVEC2                                          ivec2
#define MATHX_VK_IVEC3                                          ivec3
#define MATHX_VK_IVEC4                                          ivec4

#define MATHX_VK_UINT                                           uint
#define MATHX_VK_UVEC2                                          uvec2
#define MATHX_VK_UVEC3                                          uvec3
#define MATHX_VK_UVEC4                                          uvec4

#define MATHX_VK_MAT4                                           mat4

#define printf                                                  debugPrintfEXT

#extension GL_EXT_debug_printf : enable

#extension GL_EXT_buffer_reference : require
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_samplerless_texture_functions : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_shader_explicit_arithmetic_types_int64 : require
#extension GL_EXT_shader_image_load_formatted : require

#ifdef MATHX_VK_ENABLE_RAYTRACING
#extension GL_EXT_ray_query : require
#extension GL_EXT_ray_tracing : require
#extension GL_EXT_ray_tracing_position_fetch : require
#endif

#endif

#endif