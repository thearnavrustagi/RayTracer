#ifndef RAY_H
#define RAY_H

#include "vector.h"
#include "pixel.h"
/**
 * THis contains the code for a Ray, a ray is any vector origining
 * from a point "position" in the direction "direction", of color
 * "color"
 */
class Ray {
	public:
		Vector position;
		Vector direction;
		Pixel  color;
	public:
		Ray(const Vector, const Vector,const Pixel);

		Vector at (double) const;
		Pixel get_color ();
};
#endif
