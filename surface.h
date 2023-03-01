#ifndef HITTABLE_H
#define HITTABLE_H

#include "vector.h"
#include "ray.h"

struct hit_record {
	Vector point;
	Vector normal;
	double distance;
};

class Surface {
	public: 
		virtual bool hit(const Ray&, double, double, hit_record&) const = 0;
};

#endif
