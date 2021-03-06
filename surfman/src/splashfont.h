#ifndef _SPLASHFONT_H_
#define _SPLASHFONT_H_
#include "project.h"

struct splashfont_8x8 {
	int gfx_format;
	uint32_t ch[0x5e][8][8]; // no space, no DEL
};

/* 8x8 standard, in big endian notation */
struct splashfont_8x8 simplefont = {
	.gfx_format = SURFMAN_FORMAT_BGRX8888,
	.ch[0x2e - 0x21] = {{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0x7f7f7f00, 0x7f7f7f00, 0, 0, 0, 0, 0},
			{ 0, 0x7f7f7f00, 0x7f7f7f00, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0}},

	.ch[0x2f - 0x21] = {{ 0, 0, 0, 0, 0, 0, 0, 0x7f7f7f00},
			{ 0, 0, 0, 0, 0, 0, 0x7f7f7f00, 0},
			{ 0, 0, 0, 0, 0, 0x7f7f7f00, 0, 0},
			{ 0, 0, 0, 0, 0x7f7f7f00, 0, 0, 0},
			{ 0, 0, 0, 0x7f7f7f00, 0, 0, 0, 0},
			{ 0, 0, 0x7f7f7f00, 0, 0, 0, 0, 0},
			{ 0, 0x7f7f7f00, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0}},

	.ch[0x30 - 0x21] = {{ 0, 0, 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 0, 0},
			{ 0, 0x7f7f7f00, 0, 0, 0, 0x7f7f7f00, 0x7f7f7f00, 0},
			{ 0, 0x7f7f7f00, 0, 0, 0, 0x7f7f7f00, 0x7f7f7f00, 0},
			{ 0, 0x7f7f7f00, 0, 0, 0x7f7f7f00, 0, 0x7f7f7f00, 0},
			{ 0, 0x7f7f7f00, 0, 0x7f7f7f00, 0, 0, 0x7f7f7f00, 0},
			{ 0, 0x7f7f7f00, 0x7f7f7f00, 0, 0, 0, 0x7f7f7f00, 0},
			{ 0, 0x7f7f7f00, 0x7f7f7f00, 0, 0, 0, 0x7f7f7f00, 0},
                        { 0, 0, 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 0, 0}},

	.ch[0x5f - 0x21] = {{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 
			0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00, 0x7f7f7f00}},
			
	.ch[0x7e - 0x21] = {{ 0, 0x7f7f7f00, 0x7f7f7f00, 0, 0, 0, 0, 0x7f7f7f00},
			{ 0x7f7f7f00, 0, 0, 0x7f7f7f00, 0, 0, 0, 0x7f7f7f00},
			{ 0x7f7f7f00, 0, 0, 0, 0, 0x7f7f7f00, 0x7f7f7f00, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0},
			{ 0, 0, 0, 0, 0, 0, 0, 0}}
};

#endif
