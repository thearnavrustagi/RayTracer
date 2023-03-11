#include <cstdlib>
#ifndef UTILS_H
#define UTILS_H
inline double random_double() {
    // Returns a random real in [0,1).
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}

inline double clamp (double x, double min, double max) {
	if (x < min) return min;
	if (x > max) return max;
	return x;
}
#endif
