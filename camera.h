class Camera {
	public:
		int focal_length;

		/*
		 * this is the height the camera is able to see
		 * like lets say the camera is at (0,0,0), the
		 * edges of its camera at a distance of z=-1, will
		 * be (2,1,-1),(-2,-1,-1)
		 */
		int viewport_height;
		/**
		 * This is the height of the viewport
		 */
		int viewport_width;

		Vector position;
		/**
		 *This is the vector representation of the viewport width
		 */
		Vector horizontal;
		/**
		 *This is the vector representation of the viewport height
		 */
		Vector vertical;
		Vector lower_left_corner;
		/**
		 * This is the normal vector from the camera to the viewing plane
		 */
		Vector normal;
	public:
		Camera(int, int, int, Vector);
};