/*
Exercise 6-5. Revisit Exercise 6-3, but this time use a smart pointer to store the array,
that is, if you haven’t already done so from the start. A good student should’ve known
not to use the low-level memory allocation primitives....
*/
#include <iostream>
#include <iomanip>
#include <memory>
#include <cmath>
int main(){
  int size {};
  float sum {0};
  std::cout << "Enter size: ";
  std::cin >> size;
  auto arr {std::make_unique<float[]> (size) }; // float *data = new float[size];
  for(int i = 0; i < size; i++){
    arr[i] = 1.0 / pow(i+1,2);
    sum += arr[i];
  }
  std::cout << "Result: " << std::setw(10) << sqrt(sum*6.0) << std::endl;
  arr.reset();
  if(!arr){
    std::cout << "arr is reset to nullptr\n";
  }

}
