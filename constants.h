#ifndef CONSTANTS_H
#define CONSTANTS_H
const int ASPECT_RATIO = 16.0 / 9.0;
const int IMAGE_WIDTH = 400;
const int IMAGE_HEIGHT = static_cast<int>(IMAGE_WIDTH / ASPECT_RATIO);

const float FOCAL_LENGTH = 1.0;
const float VIEWPORT_HEIGHT = 2.0;
const float VIEWPORT_WIDTH = ASPECT_RATIO * VIEWPORT_HEIGHT;

const double MIN_DISTANCE = 0.1;
const double MAX_DISTANCE = 1;
#endif
