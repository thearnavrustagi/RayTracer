#ifndef SURFACE_LIST_H
#define SURFACE_LIST_H

#include "surface.h"

#include <memory>
#include <vector>

using std::shared_ptr;
using std::make_shared;

class SurfaceList : public Surface {
	public:
		std::vector<shared_ptr<Surface>> surfaces;
	
	public:
		SurfaceList ();
		SurfaceList (shared_ptr<Surface>);

		void clear ();
		void add (shared_ptr<Surface>);

		virtual bool hit (const Ray, double, double, hit_record&) const;
};

#endif
