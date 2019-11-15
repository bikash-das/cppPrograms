#include <iostream>
using namespace std;
class A{
	int _a;
	int _b;
	int _c;
public:
	A(int);
	~A();
	int a(){ return _a ;}
	int b(){ return _b ;}
	int c(){ return _c; }
};
A::A(int i = 0): _a(i), _b(i+1), _c(i+2) {
	cout << "A constructor called\n";
}
A::~A(){
	cout << "A destructor called\n";
}
int main(){
	cout << "Allocating space for one A objects\n";
	A *a = new A();
	if(a==nullptr){
		cerr << "new A failed.\n";
		return 1;
	}
	printf("a: %d, %d, %d\n", a->a(), a->b(), a->c());
	delete a;
	cout << "space for A object deleted\n";
	return 0;
}
