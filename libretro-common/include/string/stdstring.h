/* Copyright  (C) 2010-2015 The RetroArch team
 *
 * ---------------------------------------------------------------------------------------
 * The following license statement only applies to this file (stdstring.h).
 * ---------------------------------------------------------------------------------------
 *
 * Permission is hereby granted, free of charge,
 * to any person obtaining a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __LIBRETRO_SDK_STDSTRING_H
#define __LIBRETRO_SDK_STDSTRING_H

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <boolean.h>

#include <retro_common_api.h>

RETRO_BEGIN_DECLS

bool string_is_empty(const char *data);

bool string_is_equal(const char *a, const char *b);

bool string_is_equal_noncase(const char *a, const char *b);

char *string_to_upper(char *s);

char *string_to_lower(char *s);

char *string_ucwords(char* s);

char *string_replace_substring(const char *in, const char *pattern,
      const char *by);

/* Remove whitespace from beginning of string */
void string_trim_whitespace_left(char *string);

/* Remove whitespace from end of string */
void string_trim_whitespace_right(char *string);

RETRO_END_DECLS

#endif
