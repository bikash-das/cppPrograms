#include <iostream>

int main(){
  long numbers[] {10,20,30,40,50,60,70,80};
  //printing values
  for(auto val : numbers)
    std::cout << val << " ";
  std::cout << "\n";

  long *pnum1 {&numbers[0]}; //contiains address of first element of an array
  long *pnum2 {&numbers[2]}; //contains address of third element of an array

  //since both points to the same array we can calc the difference
  auto difference {pnum2 - pnum1};
  std::cout << difference << std::endl; //output is 2: measured in terms of elements which equals 2*sizeof(long) and compiler knows
  std::ptrdiff_t difference2 {pnum2 - pnum1}; //subs 2 pointer result in value of type std::ptrdiff_t definedin cstddef header
  std::cout << difference2 << "\n";
}
