#include <iostream>

#include "vector.h"
#include "constants.h"
#include "camera.h"
#include "engine.h"

using namespace std;

int main () {
	Camera camera(FOCAL_LENGTH, VIEWPORT_WIDTH, VIEWPORT_HEIGHT, Vector(0,0,0));
	Engine engine(IMAGE_WIDTH,IMAGE_HEIGHT, camera);
	engine.render();
}
