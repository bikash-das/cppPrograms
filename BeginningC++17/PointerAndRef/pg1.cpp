#include <iostream>

int main(){
  // printing size of pointers
  std::cout << sizeof(double) << " > " << sizeof(char) << std::endl;
  std::cout << sizeof(double*) << " == " << sizeof(char*) << std::endl;
  std::cout << "********************************************\n";
  long number {12345L}; // long number
  long *pnumber {&number};
  std::cout << *pnumber << std::endl;
  std::cout << pnumber << std::endl;
  //compiler deduced types
  auto* pnumber2 {&number}; //use auto* to denote it's a pointer
}
