#include <iostream>

#include "vector.h"
#include "pixel.h"
#include "ray.h"
#include "camera.h"
#include "engine.h"
#include "sphere.h"
#include "constants.h"
#include "surface.h"
#include "surface_list.h"
#include "color.h"

using namespace std;

Engine::Engine (int h, int w, Camera cam) : camera{cam}, surfaces{}, samples_per_pixel{100} {
	this->height = h;
	this->width = w;

	cout << "P3\n" << width << ' ' << height << "\n255\n";
}

void Engine::scanline_indication (int i) {
	cerr << "\rScanlines Remaining " << height-i << '%' << flush;
}

void Engine::render() {
	float red, green, blue;

	surfaces.add(make_shared<Sphere>(Vector{0,0,-1},0.45));
	surfaces.add(make_shared<Sphere>(Vector{0,100.5,-1},100));

	for (float j=0; j < height ; j++) {
		scanline_indication(j);
		for (float i=0; i < width ; i ++) {
			double x = double(i) / (width-1);
			double y = double(j) / (height-1);
			Ray ray = camera.get_ray(x,y,Pixel{1,1,1});

			hit_record record;
			Vector paintable = Vector{0,0,0};
			for (int s = 0; s < samples_per_pixel; ++s) {
				double u = (i + random_double()) / (width-1);
				double v = (j + random_double()) / (height-1);
				Ray r = camera.get_ray(u, v, Pixel{0,0.5,1});
				paintable = paintable + Vector{get_color(r, surfaces,samples_per_pixel)};
			}
			/**if (surfaces.hit(ray, MIN_DISTANCE, MAX_DISTANCE, record)) {
				paintable = Pixel(0.5*(unit_vector(record.normal) + Vector(1,1,1)));
			}*/
			cout << Pixel{paintable}.sample(samples_per_pixel);
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
