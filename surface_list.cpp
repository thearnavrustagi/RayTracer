#include "surface_list.h"
#include "surface.h"

SurfaceList::SurfaceList () {}

SurfaceList::SurfaceList (shared_ptr<Surface> surface) {
	add(surface);
}

void SurfaceList::clear () {
	surfaces.clear();
}

void SurfaceList::add (shared_ptr<Surface> surface) {
	surfaces.push_back(surface);
}

bool SurfaceList::hit (const Ray& ray, double min_distance, double max_distance, hit_record& record) const {
	hit_record temporary_record;
	bool hit_anything = false;
	double closest_distance = max_distance;

	for (const shared_ptr<Surface> surface : surfaces) {
		if (surface->hit(ray,min_distance, closest_distance, temporary_record)) {
			hit_anything = true;
			closest_distance = temporary_record.distance;
			record = temporary_record;
		}
	}

	return hit_anything;
}
