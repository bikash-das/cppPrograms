#include <iostream>
#include <string>
#include <cstdlib>

void clearscreen(){
  system("clear");
}

int main(){
  std::cout << "Hello world\n";
  clearscreen();
  std::cout << "Hey there!\n";
}
