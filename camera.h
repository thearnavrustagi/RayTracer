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
		int viewport_width;

		Vector position;
		Vector horizontal;
		Vector vertical;
		Vector lower_left_corner;
		Vector normal;
	public:
		Camera(int, int, int, Vector);
};