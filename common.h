#ifndef IMGLIB_COMMON_H_
#define IMGLIB_COMMON_H_

#include <cstdint>

typedef struct {
	const uint32_t *data;
	uint16_t width;
	uint16_t height;
	uint8_t dataSize;
} ImageData;

#endif // IMGLIB_COMMON_H_