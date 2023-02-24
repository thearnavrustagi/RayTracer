class Ray {
	public:
		Vector position;
		Vector direction;
		Pixel  color;
	public:
		Ray(const Vector, const Vector,const Pixel);

		Vector at (double) const;
		Pixel get_color ();
};
