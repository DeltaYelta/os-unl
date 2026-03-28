#pragma once

// Copied with minor changes from https://github.com/Cactus-proj/libc11, which is a public domain implementation
// Also it's <stdarg.h>, how much copyright can you really infringe

typedef __builtin_va_list va_list;

#define va_start(ap, param) __builtin_va_start(ap, param)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)
#define va_end(ap)          __builtin_va_end(ap)
#define va_copy(dest, src)  __builtin_va_copy(dest, src)