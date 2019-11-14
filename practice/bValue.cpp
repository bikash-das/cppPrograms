#include <iostream>
struct item { 
    unsigned int list:1;    // True if item is in the list
    unsigned int seen:1;    // True if this item has been seen
    unsigned int number:13; // Item number
}; 
struct vBool{
	unsigned int value:1;
};
int main(){
//	item a;
//	a.list=1;
//	a.seen=1;
//	a.number=20;
//	std::cout<<a.list<<" "<<a.seen<<" "<<a.number<<"\n";
	vBool a;
	a.value = 1;
	std::cout<<a.value;
}
