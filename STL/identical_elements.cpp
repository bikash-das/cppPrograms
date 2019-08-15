/*
  Get list of numbers in 2 arrays. Find the identical integers from that 2 array
  and sort the final list in ascending order.
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
int main(){
  std::vector<int> myArray_1,myArray_2;
  std::cout << "Enter elements of first array: (Enter Ctrl+ D to end.)\n";
  std::copy(std::istream_iterator<int> {std::cin}, std::istream_iterator<int>{},
        std::back_inserter(myArray_1));
  std::cin.clear();
  std::sort(myArray_1.begin(), myArray_1.end());
  auto iter1 = std::unique(myArray_1.begin(), myArray_1.end());
  myArray_1.erase(iter1, myArray_1.end());

  std::cout << "Enter elements of second array: (Enter Ctrl + D to end.)\n";
  std::copy(std::istream_iterator<int> {std::cin}, std::istream_iterator<int>{},
        std::back_inserter(myArray_2));
  std::sort(myArray_2.begin(), myArray_2.end());
  auto iter2 = std::unique(myArray_2.begin(), myArray_2.end());
  myArray_2.erase(iter2, myArray_2.end());
  
  /* print the identical numbers */
  std::cout << "Final Output: \n";
  int f = 0;
  for(auto& val : myArray_1)
    for(auto& val2 : myArray_2)
      if(val == val2){
          std::cout << val << " ";
          f = 1;
      }
  if(f != 1)
    std::cout << "No Identical Elements";
  std::cout << "\n";
}
