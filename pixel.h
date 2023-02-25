/**
 * This class represents the color to be painted for some Pixel, basically
 * the color class
 */
class Pixel : public Vector {
	public:
		Pixel (double, double, double);
		Pixel (Vector v); 
};

inline std::ostream& operator<< (std::ostream &out, Pixel color) {
	out << static_cast<int>(255.99 * color[0]) << ' '
		<< static_cast<int>(255.99 * color[1]) << ' '
		<< static_cast<int>(255.99 * color[2]) << std::endl;

	return out;
}
