/* See LICENSE for license information. */

#ifndef NOWL

#pragma once

#include "gui.h"
#include "util.h"

struct WindowBase*
Window_new_wayland(Pair_uint32_t res,
                   void* user_data,
                   void (*key_handler)(void*, uint32_t, uint32_t),
                   void (*button_handler)(void*,
                                          uint32_t,
                                          bool,
                                          int32_t,
                                          int32_t,
                                          int32_t,
                                          uint32_t),
                   void (*motion_handler)(void*, uint32_t, int32_t, int32_t),
                   void (*clipboard_handler)(void*, const char*));

#endif