#include <iostream>

int main(int argc, char** argv){
  for(int i {}; i < argc; i++){
    std::cout << *argv++ << " ";
  }
  std::cout << std::endl;
}
