#include "surface.h"
#include "sphere.h"

#include <cmath>
#include <iostream>

Sphere::Sphere (Vector c, double r) : center(c), radius(r) {}

bool Sphere::hit(const Ray incident, double min_distance, double max_distance, hit_record& record) const {
	Vector delta_center = (incident.position - center);
	double a = dot(incident.direction,incident.direction);
	double half_b = dot(delta_center, incident.direction);
	double c = delta_center.norm_squared() - radius*radius;

	double discriminant = half_b*half_b - a*c;
	if (discriminant < 0) return false;

	double sqrt_discriminant = sqrt(discriminant);

	// finding the closest root
	double alpha = (-half_b -sqrt_discriminant)/a;
	double beta  = (-half_b +sqrt_discriminant)/a;
	double root = alpha;
	//cerr << alpha << endl;
	if (min_distance > alpha || max_distance < alpha) {
		root = beta;
		if (min_distance > beta || max_distance < beta)
			return false;
	}

	record.distance = root;
	record.point = incident.at(record.distance);
	Vector normal = (record.point - this->center) / radius;
	record.set_face_normal(incident, normal);

	return true;

}
