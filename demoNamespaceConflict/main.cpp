#include <iostream>
#include "1.cpp"
#include "2.cpp"

/*
using namespace hello1;  //contains print()
using namespace hello2;  //contains print()

int main(){
    print();      //compiler is confused which print() to call, program will not compile
  }

*/

//Instead do this

int main(){
  hello1::print();  //now compiler knows which function to call 
  hello2::print();
}
