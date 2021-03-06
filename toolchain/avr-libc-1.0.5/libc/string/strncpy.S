/* Copyright (c) 2002, Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

#include "macros.inc"

#define dest_hi r25
#define dest_lo r24
#define src_hi r23
#define src_lo r22
#define len_hi r21
#define len_lo r20

/** \ingroup avr_string
    \fn char *strncpy(char *dest, const char *src, size_t len)
    \brief Copy a string.

    The strncpy() function is similar to strcpy(), except that not more than n
    bytes of src are copied. Thus, if there is no null byte among the first n
    bytes of src, the result will not be null-terminated.

    In the case where the length of src is less than that of n, the remainder
    of dest will be padded with nulls.

    \returns The strncpy() function returns a pointer to the destination
    string dest.  */

	.text
	.global	_U(strncpy)
	.type	_U(strncpy), @function
_U(strncpy):
	LOAD_Z(src_lo, src_hi)
	LOAD_X(dest_lo, dest_hi)
.strncpy_loop:
	subi	len_lo, lo8(1)
	sbci	len_hi, hi8(1)
	brcs	.strncpy_done
	ld	__tmp_reg__, Z+
	st	X+, __tmp_reg__
	tst	__tmp_reg__
	brne	.strncpy_loop
; store null characters up to the end of dest
; as the glibc manual says:
; This behavior is rarely useful, but it is specified by the ISO C standard.
	rjmp	.strncpy_clr_start
.strncpy_clr_loop:
	st	X+, __zero_reg__
.strncpy_clr_start:
	subi	len_lo, lo8(1)
	sbci	len_hi, hi8(1)
	brcc	.strncpy_clr_loop
.strncpy_done:
; return dest (unchanged)
	ret
.strncpy_end:
	.size	_U(strncpy), .strncpy_end - _U(strncpy)

