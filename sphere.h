#ifndef SPHERE_H
#define SPHERE_H

#include "surface.h"
#include "vector.h"

class Sphere{
	public:
		Vector center;
		double radius;
	public:
		Sphere (Vector,double);
		bool hit (const Ray&, double, double, hit_record&);
};

#endif
