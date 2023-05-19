#pragma once

#include <iostream>
#include "FreeImage.h"
using namespace std;

typedef struct Image_Metadata 
{
	unsigned int width = -1;
	unsigned int height = -1;
	int bpp = -1; // ? Bits Per Pixel
	int pitch;
	int bitmapWidth;
	uint8_t *bitmap;
	string address = "unknown";
	FREE_IMAGE_FORMAT imageFormat = FIF_UNKNOWN;
	FIBITMAP *dib;
	FREE_IMAGE_COLOR_TYPE colorType; 	// ? One of -> FIC_MINISWHITE-0 | FIC_MINISBLACK-1 | FIC_RGB-2 | FIC_PALETTE-3 | FIC_RGBALPHA-4 | FIC_CMYK-5

} ImageData;

typedef struct pixel 
{
	uint8_t red, green, blue;
} Pixel;

