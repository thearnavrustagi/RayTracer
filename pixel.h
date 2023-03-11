#ifndef PIXEL_H
#define PIXEL_H
#include "utils.h"
/**
 * This class represents the color to be painted for some Pixel, basically
 * the color class
 */
class Pixel : public Vector {
	public:
		Pixel (double, double, double);
		Pixel (Vector v); 

		Pixel sample (int);
};

inline std::ostream& operator<< (std::ostream &out, Pixel color) {
	double r = color[0];
	double g = color[1];
	double b = color[2];

	out << static_cast<int>(256 * clamp(r,0.0,0.9999)) << ' '
		<< static_cast<int>(256 * clamp(g,0.0,0.9999)) << ' '
		<< static_cast<int>(256 * clamp(b,0.0,0.9999)) << std::endl;

	return out;
}


#endif
