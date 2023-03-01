#include "vector.h"
#include "pixel.h"
#include "ray.h"

#include <iostream>

Ray::Ray(const Vector u, const Vector v, const Pixel p) : position(u), direction(v), color(p) {}

Vector Ray::at (double distance) const {
	return position + distance * direction;
}

Pixel Ray::get_color () {
	Vector unit_vector = this->direction.get_direction();
	float t = 0.5*(unit_vector.y + 1.0);
	return Pixel(t*Vector(1.0,1.0,1.0) + (1.0-t)*Vector(this->color));
}
