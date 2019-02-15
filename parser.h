#ifndef IMGLIB_PARSER_H_
#define IMGLIB_PARSER_H_

#include "common.h"

namespace img {
	
	void drawPixel(uint16_t x, uint16_t y, uint32_t color);

	void printImage(uint16_t x, uint16_t y, ImageData data);

}

#endif // IMGLIB_PARSER_H_