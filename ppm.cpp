#include <iostream>


int main() {

	// Writes a basic serialized shader to cout in PPM format

	const int imageWidth = 256;
	const int imageHeight = 256;

	std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

	for (int row = imageHeight - 1; row >= 0; --row) {
		for (int col = 0; col < imageWidth; ++col) {
			/*
			double r = double(col) / (imageWidth - 1);
			double g = double(row) / (imageHeight - 1);
			double b = .25;
			*/
			std::cout << col << ' ' << row << " 64\n";
		}
	}

}