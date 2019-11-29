class Box{
	private:
		double length {1.0};
		double width {1.0};
		double height {1.0};
		static inline size_t objectCount {};	//count of objects in existence
	public:
		Box(double lv, double wv, double hv);
		Box(double side);   //constructor for a cube
		Box();
		Box(const Box& box);	//copy constructor
		
		double volume() const;	//calc volume

		size_t getObjectCount() const {
			return objectCount;
		}
};
