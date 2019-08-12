/*
  Get list of numbers in 2 arrays. Find the identical integers from that 2 array
  and sort the final list in ascending order.
*/
#include <iostream>
#include <vector>
#include <algorithm>

void getValues(std::vector<int>& myArray){
  std::cout << "Enter " << myArray.size() << " elements\n";
  for(int i = 0; i < myArray.size(); i++){
    std::cin >> myArray[i];
  }
}
void printValues(std::vector<int>& myArray){
  for(int i = 0; i < myArray.size(); i++){
    std::cout << myArray[i] << " ";
  }
  std::cout << std::endl;
}

int main(){
  unsigned int arr_size_1, arr_size_2;
  std::cout << "Enter size of first array: ";
  std::cin >> arr_size_1;
  std::cout << "Enter size of second array: ";
  std::cin >> arr_size_2;

  std::vector<int> myArray_1(arr_size_1);
  std::vector<int> myArray_2(arr_size_2);

  getValues(myArray_1);
  getValues(myArray_2);

  std::sort(myArray_1.begin(), myArray_1.end());
  std::sort(myArray_2.begin(), myArray_2.end());

  auto iter1 = std::unique(myArray_1.begin(), myArray_1.end());
  auto iter2 = std::unique(myArray_2.begin(), myArray_2.end());

  myArray_1.resize(std::distance(myArray_1.begin(), iter1));
  myArray_2.resize(std::distance(myArray_2.begin(), iter2));


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
