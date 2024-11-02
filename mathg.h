#pragma once

#define GLM_FORCE_CTOR_INIT
#define GLM_FORCE_EXPLICIT_CTOR
#define GLM_FORCE_INLINE
#define GLM_FORCE_XYZW_ONLY
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_FORCE_LEFT_HANDED
//#define GLM_FORCE_RIGHT_HANDED
//#define GLM_FORCE_INTRINSICS
//#define GLM_FORCE_CXX98
//#define GLM_FORCE_CXX17
#define GLM_ENABLE_EXPERIMENTAL
//#define GLM_FORCE_MESSAGES

#ifdef GLM_FORCE_INTRINSICS
#define GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#endif

#include <glm/glm.hpp>
#include <glm/ext.hpp> // ext, gtc, gtx, etc.

using Vector2 = glm::vec2;
using Vector3 = glm::vec3;
using Vector4 = glm::vec4;

using Vector3b = glm::bvec3;

using Vector2i = glm::ivec2;
using Vector3i = glm::ivec3;
using Vector4i = glm::ivec4;

using Vector2u = glm::uvec2;
using Vector3u = glm::uvec3;
using Vector4u = glm::uvec4;

using Vector2u8 = glm::u8vec2;
using Vector3u8 = glm::u8vec3;
using Vector4u8 = glm::u8vec4;

using Quaternion = glm::quat;
using Matrix3x3 = glm::mat3x3;
using Matrix4x4 = glm::mat4x4;

namespace mg = glm;