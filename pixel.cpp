#include <iostream>
#include "vector.h"
#include "pixel.h"

Pixel::Pixel (double a, double b, double c) : Vector(a,b,c) {}
Pixel::Pixel (Vector v) : Vector(v) {}
