//-----------------------------------------------------------------------------
// Copyright (C) 2010 iZsh <izsh at fail0verflow.com>
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// utilities
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdint.h>

void print_hex(const uint8_t * data, const size_t len);
char * sprint_hex(const uint8_t * data, const size_t len);
void num_to_bytes(uint64_t n, size_t len, uint8_t* dest);
uint64_t bytes_to_num(uint8_t* src, size_t len);