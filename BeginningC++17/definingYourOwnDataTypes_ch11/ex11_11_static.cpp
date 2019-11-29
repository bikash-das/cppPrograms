// using a static member variable
#include <iostream>
#include "Box.cpp"
int main(){
	const Box box1 {2.0, 3.0, 4.0};
	Box box2 {5.0};
	std::cout << "box1 volume = " << box1.volume() << std::endl;
	std::cout << "box2 volume = " << box2.volume() << std::endl;
	Box box3 {box2};  //uses copy constructor
	std::cout << "box3 volume = " << box3.volume() << std::endl;

	std::cout << "\n";
	Box boxes[6] { box1, box2, box3, Box{2.0}};
	std::cout << "\nThere are now " << box1.getObjectCount() << " Box objects. " << std::endl;
	
	//let's create another object
	Box box4 {box2};
	std::cout << "\nThere are now " << box1.getObjectCount() << " Box objects. " << std::endl;
	
}

