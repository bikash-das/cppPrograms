/*
Exercise 6-3. Write a program that reads an array size from the keyboard and
dynamically allocates an array of that size to hold floating-point values. Using pointer
notation, initialize all the elements of the array so that the value of the element at
index position n is 1 / (n + 1)^2 . Calculate the sum of the elements using array notation,
multiply the sum by 6, and output the square root of that result.
*/
#include <iostream>
#include <cmath>

int main(){
  int size {};
  std::cout << "Enter size?\n";
  std::cin >> size;
  float sum {0.0};
  float *arr {new float(size)};
  float *p = arr;
  for(int i = 0; i < size; i++){
    *p ++ = 1.0 / pow(i+1,2);
    sum += arr[i];
  }
  std::cout << sqrt(sum*6) << std::endl;


}
