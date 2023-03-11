#ifndef SPHERE_H
#define SPHERE_H

#include "surface.h"
#include "vector.h"

class Sphere : public Surface{
	public:
		Vector center;
		double radius;
	public:
		Sphere (Vector,double);
		bool hit (const Ray, double, double, hit_record&) const;
};

#endif
