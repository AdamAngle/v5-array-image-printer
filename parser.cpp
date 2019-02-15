#include "parser.h"

namespace img {

	void drawPixel(uint16_t x, uint16_t y, uint32_t color) {
		Brain.Screen.setPenColor(color);
		Brain.Screen.drawPixel(x, y);
	}
	
	// Function to print the image specified with an ImageData object.
	void printImage(uint16_t x, uint16_t y, ImageData imgData) {
		
		int currentPixelIndex = 0;
		
		for (int iY = 0; iY < imgData.height; iY++)
		{
			for (int iX = 0; iX < imgData.width; iX++)
			{
				ui::drawPixel((iX+x), (iY+y), imgData.data[currentPixelIndex]);
				currentPixelIndex++;
				//vex::this_thread::sleep_for(2);
			}
		}

	}

}