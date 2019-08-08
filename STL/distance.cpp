#include <iostream>

int main(){
  int arr[] {1,2,3,4,5,6};
  auto a = std::begin(arr);
  auto b = std::end(arr);
  std::cout << std::distance(a,b) << std::endl;
  std::advance(a,2);
  std::cout << std::distance(a,b) << std::endl;
  auto c = std::begin(arr);
  std::cout << *std::next(c,4) << std::endl; // index 4 value
  std::cout << *std::prev(std::end(arr), 1); << std::endl;
}
