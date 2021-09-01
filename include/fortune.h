
/* SPDX-License-Identifier: BSD-3-Clause AND MIT */
/*
 * Authors: Alexander Jung <alex@nderjung.net>
 *
 * Copyright (c) 2021, Alexander Jung. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __FORTUNE_H__
#define __FORTUNE_H__

#define LIBFORTUNE_TOTAL 4

typedef struct {
  const char* quote;
  const char* author;
} fortune_t;

fortune_t *rand_fortune();

static fortune_t fortunes[] = {
  {
    .quote="It always seems impossible until it is done.",
    .author="Nelson Mandela"
  },
  {
    .quote="You must be the change you wish to see in the world.",
    .author="Mahatma Gandhi"
  },
  {
    .quote="We don't make mistakes, just happy little accidents.",
    .author="Bob Ross"
  },
  {
    .quote="https://www.youtube.com/watch?v=dQw4w9WgXcQ",
    .author="Unknown"
  }
};

#endif /* __FORTUNE_H__ */
