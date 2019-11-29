#include <iostream>
#include "Box.h"

Box::Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv} {
	++objectCount;
	std::cout << "Box constructor 1 called. " << std::endl;
}
Box::Box(double side) : Box {side, side, side }{
	++objectCount;
	std::cout << "Box for cube" << std::endl;
}
Box::Box(){
	++objectCount;
	std::cout << "Default Box " << std::endl;
}
Box::Box(const Box& box): length {box.length}, width {box.width}, height {box.height}{
		++objectCount;
		std::cout << "Box copy constructor called." << std::endl;
	}
double Box::volume() const {
	return length * width * height;
}
