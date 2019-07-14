#include <iostream>
#include <string>
#include <cstdlib>

void clearscreen(){
  // detect which os you are running
  system("clear"); //works for linux ,
}

int main(){
  std::cout << "Hello world\n";
  clearscreen();
  std::cout << "Hey there!\n";
}
