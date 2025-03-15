#pragma once

#define GLM_FORCE_CTOR_INIT
#define GLM_FORCE_EXPLICIT_CTOR
#define GLM_FORCE_INLINE
#define GLM_FORCE_RADIANS

#if MATHX_ENABLE_RIGHT_HANDED
    #define GLM_FORCE_RIGHT_HANDED
#else
    #define GLM_FORCE_LEFT_HANDED
#endif

#if MATHX_ENABLE_SIMD
    #define GLM_FORCE_INTRINSICS
#endif

//#define GLM_FORCE_CXX98
//#define GLM_FORCE_CXX11
//#define GLM_FORCE_CXX14
//#define GLM_FORCE_CXX17
//#define GLM_FORCE_MESSAGES
#define GLM_ENABLE_EXPERIMENTAL

#ifdef GLM_FORCE_LEFT_HANDED
    #define GLM_FORCE_DEPTH_ZERO_TO_ONE
#endif

#ifdef GLM_FORCE_INTRINSICS
    #undef GLM_FORCE_XYZW_ONLY
    #define GLM_FORCE_ALIGNED
#else
    //#define GLM_FORCE_PURE
#endif

#include <glm/glm.hpp>
#include <glm/ext.hpp>          // ext, gtc, gtx, etc.

#define MATHX_GLM_DEFINE_TYPES(prefix, _comment) \
using Vector1##prefix = glm::prefix##vec1; \
using Vector2##prefix = glm::prefix##vec2; \
using Vector3##prefix = glm::prefix##vec3; \
using Vector4##prefix = glm::prefix##vec4; \
using Matrix2x2##prefix = glm::prefix##mat2x2; \
using Matrix2x3##prefix = glm::prefix##mat2x3; \
using Matrix2x4##prefix = glm::prefix##mat2x4; \
using Matrix3x2##prefix = glm::prefix##mat3x2; \
using Matrix3x3##prefix = glm::prefix##mat3x3; \
using Matrix3x4##prefix = glm::prefix##mat3x4; \
using Matrix4x2##prefix = glm::prefix##mat4x2; \
using Matrix4x3##prefix = glm::prefix##mat4x3; \
using Matrix4x4##prefix = glm::prefix##mat4x4;

#define MATHX_GLM_DEFINE_TYPES_HLSL(suffix, prefix_og) \
using Vector1##suffix = glm::prefix_og##1; \
using Vector2##suffix = glm::prefix_og##2; \
using Vector3##suffix = glm::prefix_og##3; \
using Vector4##suffix = glm::prefix_og##4; \
using Matrix2x2##suffix = glm::prefix_og##2x2; \
using Matrix2x3##suffix = glm::prefix_og##2x3; \
using Matrix2x4##suffix = glm::prefix_og##2x4; \
using Matrix3x2##suffix = glm::prefix_og##3x2; \
using Matrix3x3##suffix = glm::prefix_og##3x3; \
using Matrix3x4##suffix = glm::prefix_og##3x4; \
using Matrix4x2##suffix = glm::prefix_og##4x2; \
using Matrix4x3##suffix = glm::prefix_og##4x3; \
using Matrix4x4##suffix = glm::prefix_og##4x4;

MATHX_GLM_DEFINE_TYPES(i8, "i8")
MATHX_GLM_DEFINE_TYPES(u8, "u8")
MATHX_GLM_DEFINE_TYPES(u16, "half")
MATHX_GLM_DEFINE_TYPES(u, "uint")

MATHX_GLM_DEFINE_TYPES_HLSL(b, bool)
MATHX_GLM_DEFINE_TYPES_HLSL(i, int)
//MATHX_GLM_DEFINE_TYPES_HLSL(u16, half)
MATHX_GLM_DEFINE_TYPES_HLSL(f, float)
MATHX_GLM_DEFINE_TYPES_HLSL(d, double)

#if 0
using Vector2b = glm::bool2;
using Vector3b = glm::bvec3;
using Vector4b = glm::bvec4;
using Matrix2x2b = glm::bool2x2;
using Matrix2x3b = glm::bool2x3;
using Matrix2x4b = glm::bool2x4;
using Matrix3x2b = glm::bool3x2;
using Matrix3x3b = glm::bool3x3;
using Matrix3x4b = glm::bool3x4;
using Matrix4x2b = glm::bool4x2;
using Matrix4x3b = glm::bool4x3;
using Matrix4x4b = glm::bool4x4;
#endif

using Quaternionf = glm::quat;
using Quaterniond = glm::dquat;

namespace mg = glm;