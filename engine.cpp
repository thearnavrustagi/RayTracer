#include <iostream>

#include "vector.h"
#include "pixel.h"
#include "ray.h"
#include "camera.h"
#include "engine.h"
#include "utility.h"

using namespace std;

Engine::Engine (int h, int w, Camera cam) : camera(cam) {
	this->height = h;
	this->width = w;

	cout << "P3\n" << width << ' ' << height << "\n255\n";
}

void Engine::scanline_indication (int i) {
	cerr << "\rScanlines Remaining " << i << flush;
}

void Engine::render() {
	float red, green, blue;

	for (float j=0; j < height ; j++) {
		//scanline_indication(i);
		for (float i=0; i < width ; i ++) {
			double x = double(i) / (width-1);
			double y = double(j) / (height-1);
			Vector posn(camera.position);
			Vector dirn(camera.lower_left_corner + x*camera.horizontal + y*camera.vertical - camera.position);
			Ray ray(posn, dirn,Pixel(1,0.2,0.35));
			Pixel paintable = ray.get_color();
			cout << paintable;
		}
	}
}


void Engine::hello_world () {
	float red=0, green=0, blue=0.25;
	for (float i=0;i<width;i++) {
		for (float j=0;j<height;j++) {
			green = 1-i/width;
			red = j/height;

			int ir = red *255;
			int ig = green * 255;

			cout << (int)ir << ' ' << (int)ig << ' ' << (int)(blue*255) << endl;
		}
	}


}
