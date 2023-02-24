#include <cmath>
#include <iostream>
#include "vector.h"

#include "utility.h"

Vector::Vector (double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

Vector::Vector () {
	x=0;
	y=0;
	z=0;
}

Vector::Vector (const Vector &v) {
	x = v.x;
	y = v.y;
	z = v.z;
}

Vector Vector::operator- () const {
	return Vector(-x,-y,-z);
}

double Vector::operator[] (int i) const {
	if (i == 0) return x;
	if (i == 1) return y;
	if (i == 2) return z;
	return -1;
}

double Vector::norm_squared () {
	return x*x + y*y + z*z;
}

double Vector::norm () {
	return sqrt(this->norm_squared());
}

Vector Vector::get_direction () {
	return Vector(x/norm(), y/norm(), z/norm());
}

