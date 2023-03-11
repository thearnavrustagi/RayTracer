#ifndef HITTABLE_H
#define HITTABLE_H

#include "vector.h"
#include "ray.h"

struct hit_record {
	Vector point;
	Vector normal;
	double distance;
	bool front_face;

	inline void set_face_normal (const Ray& ray, const Vector unsigned_normal) {
		front_face = dot(ray.direction,unsigned_normal) < 0.0;
		normal = front_face ? unsigned_normal : -unsigned_normal;
	}
};

class Surface {
	public: 
		virtual bool hit(const Ray, double, double, hit_record&) const = 0;
};

#endif
