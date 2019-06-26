/*
Exercise 6-1. Write a program that declares and initializes an array with the first 50 odd
(as in not even) numbers. Output the numbers from the array ten to a line using pointer
notation and then output them in reverse order, also using pointer notation.
*/
#include <iostream>
#include <iomanip>
int main(){
  int *arr = new int[50];
  int *p = arr;
  for(int j=1; j <= 100; j+=2){
    *p++ = j;
  }
  p = arr;  //assigning p with first address of array
  for(int i = 0; i < 50; i++){
    std::cout <<  std::setw(10) << *p++;
    if((i+1) % 10 == 0)
      std::cout << std::endl;
    }
  std::cout << "\n";
  p = &arr[49]; //assiging last array element address to p 
  std::cout << "In Reverse Order\n";
  for(int i = 49; i >= 0; i--){
    std::cout << std::setw(10) << *p--;
    if(i % 10 == 0)
      std::cout << "\n";
  }
  std::cout << "\n";
}
