#include <iostream>
int main(){
  unsigned height[] {25,35,46,93,24,60};
  const unsigned int size {std::size(height)};  //size works only in c++17 or greater or else use sizeof() to determine size
  // like this: sizeof(height) / sizeof(height[0])
  unsigned total {};
  for(size_t i {}; i < size; i++){
    total += height[i];
  }

  const unsigned average {total/size};
  std::cout << "Average height is " << average << std::endl;

  unsigned count {};
  for(size_t i {}; i < size; i++){
    if(height[i] < average)
      ++count;
  }
  std::cout << count << " people are below average height." << std::endl;

}
