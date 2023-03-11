#include <iostream>
#include "vector.h"
#include "pixel.h"

Pixel::Pixel (double a, double b, double c) : Vector(a,b,c) {}
Pixel::Pixel (Vector v) : Vector(v) {}

Pixel Pixel::sample (int number_of_samples) {
	return (*this)/number_of_samples; 
}
