#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

void print(std::string s, std::vector<int>& vec){
  std::cout << s << " contains: " ;
  for(auto& n: vec)
    std::cout << std::setw(4) << n ;
  std::cout << std::endl;
}
// print top 5 highest number using partial_sort()
void partialSort(std::vector<int> vec){
  std::partial_sort(vec.begin(), vec.begin()+2, vec.end(), std::greater<int>());  //greater<int> is a functor
  print("Using Partial Sort vec", vec);
}
//print top 5 number
void using_nth_element(std::vector<int> vec){
  std::nth_element(vec.begin(), vec.begin()+5, vec.end(), std::greater<int>());  //if you don't provide functor, default is lesser
  //printing first 5 greatest element of the vectors
  std::cout << "Top greatest 5: ";
  for(auto it = vec.begin(); it != vec.begin()+5; it++){
    std::cout << std::setw(4) << *it << " ";
  }
  std::cout << std::endl;
  std::vector<int> vec3(5);
  std::copy_n(vec.begin(),5,vec3.begin());
  print("print top 5, vec3", vec3);
}
int main(){
  std::vector<int> vec {9,1,10,2,45,60,23,102,85,96};
  std::vector<int> vec2 = vec;
  std::cout << std::setw(5) << "size: " << vec.size() << std::endl;
  sort(vec.begin(), vec.end());  //default sort in ascending order
  print("Unsorted Vector",vec2);
  print("Sorted Vector",vec);
  partialSort(vec2);
  using_nth_element(vec2);
}
