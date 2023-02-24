class Engine {
	private:
		int height;
		int width;

		Camera camera;

	public:
		Engine(int, int, Camera);
		void hello_world();
		void render();
		void scanline_indication(int);
};
