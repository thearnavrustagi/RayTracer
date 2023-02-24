#include "vector.h"
#include "utility.h"
#include "camera.h"

Camera::Camera (int fl, int vh, int vw, Vector posn)
	{
		focal_length = fl;
		viewport_height = vh;
		viewport_width = vw;
		position = posn;
		horizontal = Vector(viewport_width,0,0);
		vertical = Vector(0,viewport_height,0);
		// the normal to the viewing plane
		normal = Vector (0,0,focal_length);
		lower_left_corner = position - (horizontal+vertical+2*normal)/2;
	}
