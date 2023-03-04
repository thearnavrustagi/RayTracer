#ifndef ENGINE_H
#define ENGINE_H
#include "surface_list.h"
/**
 * This header file has the code for our ray tracing engine, calling the 
 * render function starts rendering
 */
class Engine {
	private:
	 	// this is the height of the image
		int height;
		// this is the width of the image
		int width;

		// this is our active camera
		Camera camera;

		//this is the list of surfaces
		SurfaceList surfaces;

	public:
		Engine(int, int, Camera);
		void hello_world();
		void render();
		void scanline_indication(int);
};
#endif
