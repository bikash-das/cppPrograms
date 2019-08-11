#include <iostream>

auto returnOptional(int a = 20){
  return a;
}
int main(){
  std::cout << returnOptional() << std::endl;  //prints 20
  std::cout << returnOptional(100) << std::endl; //print 100
}
