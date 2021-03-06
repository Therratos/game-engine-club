#ifndef COMMON_H
#define COMMON_H

#include <cstdint>
#include <glm.hpp>
#include <gtx/string_cast.hpp>
#include <gtc/type_ptr.hpp>

using u8  = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

using s8  = int8_t;
using s16 = int16_t;
using s32 = int32_t;
using s64 = int64_t;

using f32 = float;
using f64 = double;

using glm::vec2;
using glm::vec3;
using glm::mat3;

#define GL_GLEXT_PROTOTYPES
#include <SDL_opengl.h>

#endif