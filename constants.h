#ifndef CONSTANTS_H
#define CONSTANTS_H
//includes
#include <cmath>
#include <limits>
#include <memory>

// usings
using std::shared_ptr;
using std::make_shared;
using std::sqrt;

//constants
const int ASPECT_RATIO = 1.0;//16.0 / 9.0;
const int IMAGE_WIDTH = 400;
const int IMAGE_HEIGHT = static_cast<int>(IMAGE_WIDTH * ASPECT_RATIO);
const int MAX_DEPTH = 50;

const float FOCAL_LENGTH = 1.0;
const float VIEWPORT_WIDTH = 2.0;
const float VIEWPORT_HEIGHT = ASPECT_RATIO * VIEWPORT_WIDTH;

const double MIN_DISTANCE = 0.1;
const double MAX_DISTANCE = 1;


const double INFTY = std::numeric_limits<double>::infinity();
const double PI = 3.1415926535897932385;

//utility functions
inline double degrees_to_radians (double degrees) {
	return degrees * PI / 180.0;
}

//common headers
#include "ray.h"
#include "vector.h"
#endif
