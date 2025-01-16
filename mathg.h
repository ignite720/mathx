#pragma once

#define GLM_FORCE_CTOR_INIT
#define GLM_FORCE_EXPLICIT_CTOR
#define GLM_FORCE_INLINE
#define GLM_FORCE_RADIANS

#ifdef MATHG_ENABLE_RIGHT_HANDED
    #define GLM_FORCE_RIGHT_HANDED
#else
    #define GLM_FORCE_LEFT_HANDED
#endif

#ifdef MATHG_ENABLE_SIMD
    #define GLM_FORCE_INTRINSICS
#endif

//#define GLM_FORCE_CXX98
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

#define DEFINE_EXTRA_VECTOR_TYPES(prefix, prefix_og) \
using Vector2##prefix = glm::##prefix_og##vec2; \
using Vector3##prefix = glm::##prefix_og##vec3; \
using Vector4##prefix = glm::##prefix_og##vec4;

#define DEFINE_EXTRA_MATRIX_TYPES(prefix, prefix_og) \
using prefix##2 = glm::##prefix_og##vec2; \
using prefix##2x2 = glm::##prefix_og##mat2x2; \
using prefix##2x3 = glm::##prefix_og##mat2x3; \
using prefix##2x4 = glm::##prefix_og##mat2x4; \
using prefix##3 = glm::##prefix_og##vec3; \
using prefix##3x2 = glm::##prefix_og##mat3x2; \
using prefix##3x3 = glm::##prefix_og##mat3x3; \
using prefix##3x4 = glm::##prefix_og##mat3x4; \
using prefix##4 = glm::##prefix_og##vec4; \
using prefix##4x2 = glm::##prefix_og##mat4x2; \
using prefix##4x3 = glm::##prefix_og##mat4x3; \
using prefix##4x4 = glm::##prefix_og##mat4x4;

DEFINE_EXTRA_VECTOR_TYPES(, )
DEFINE_EXTRA_VECTOR_TYPES(b, b)
DEFINE_EXTRA_VECTOR_TYPES(i, i)
DEFINE_EXTRA_VECTOR_TYPES(u, u)
DEFINE_EXTRA_VECTOR_TYPES(u8, u8)

DEFINE_EXTRA_MATRIX_TYPES(Float, )
DEFINE_EXTRA_MATRIX_TYPES(Sint, i)
DEFINE_EXTRA_MATRIX_TYPES(Uint, u)

using Matrix4x4 = Float4x4;
using Quaternion = glm::quat;

namespace mg = glm;