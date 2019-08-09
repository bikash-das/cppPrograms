/*
  Height Checker : code_report()
  Students are asked to stand in non-decreasing order of heights for an annual photo.

  Return the minimum number of students not standing in the right position. (This is the number of students that must move
  in order for all studdents to be standing in non-decreasing order of height)

    1. 1 <= heights.length <= 100
    2. 1 <= height[i] <= 100

*/
#include <iostream>
#include <vector>
#include <algorithm> /* for sort() */
#include <numeric>   /* for inner_product() -> zip() */
int height_checker(std::vector<int>& v){
  auto copy_v = v;    /* make duplicate */
  sort(copy_v.begin(), copy_v.end());  /* sort the duplicate */
  return std::inner_product(v.begin(), v.end(), copy_v.begin(), 0, std::plus<>(), std::not_equal_to<>()); /* count for elements not equal to, returns boolean then add using plus<>() */
}
int main(){
  int n;
  std::cout << "Enter total number of students: ";
  std::cin  >> n ;
  std::vector<int> v(n);
  int val;
  for(int i = 0; i < n; i++){
    std::cin >> val;
    v.emplace_back(val);
  }
  std::cout << height_checker(v) << std::endl;

}
