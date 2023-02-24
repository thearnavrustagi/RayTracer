/**
#include "vector.h"
#include "utility.h"

#include <iostream>
#include "pixel.h"

using namespace std;

inline std::ostream& operator<< (std::ostream &out, const Vector &v) {
	return out << v[0] << ' ' << v[1] << ' ' << v[2] << endl;
}

inline Vector operator+ (const Vector &u, const Vector &v) {
	return Vector(u[0]+v[0],u[1]+v[1],u[2]+v[2]);
}

inline Vector operator- (const Vector &u, const Vector &v) {
	return Vector(u[0]-v[0],u[1]-v[1],u[2]-v[2]);
}

inline Vector operator* (const Vector &u, const Vector &v) {
	return Vector(u[0]*v[0], u[1]*v[1], u[2]*v[2]);
}

inline Vector operator* (const double t, const Vector &v) {
	return Vector (t*v[0],t*v[1],t*v[2]);
}

inline Vector operator* (const Vector &v, const double t) {
	return t * v;
}

inline Vector operator/ (const Vector &v, const double t) {
	return (1/t) * v;
}

inline double dot (const Vector &v, const Vector &u) {
	return v[0]*u[0] + v[1]*u[1] + v[2]*u[2];
}

inline Vector cross (const Vector &v, const Vector &u) {
	return Vector  (v[1]*u[2] - v[2]*u[1],
			v[2]*u[0] - v[0]*u[2],
			v[0]*u[1] - v[1]*u[0]);
}

inline Vector unit_vector (Vector v) {
	return v / v.norm();
}
*/