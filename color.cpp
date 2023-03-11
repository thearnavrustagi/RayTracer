#include "vector.h"
#include "pixel.h"
#include "ray.h"
#include "color.h"
#include "constants.h"

Pixel get_color (Ray ray,const Surface& world, int depth=MAX_DEPTH) {
	hit_record rec;

	if (depth < 0) return Pixel{0,0,0};

	if (world.hit(ray,0,(int)INFTY,rec)) {
		Vector target = rec.point + rec.normal + Vector::generate_point_inside_unit_sphere();
		return (0.8) * (get_color (Ray{rec.point,target-rec.point,Vector{1,0,0}},world, --depth));
	}

	Vector unit_vector = ray.direction.get_direction();
	float t =  0.5*(unit_vector.y + 1.0);
	return Pixel((1.0-t)*Vector(1.0,1.0,1.0) + (t)*Vector(ray.color));
}
