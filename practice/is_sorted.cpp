#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
#include <algorithm>
// #include <execution>

int main(){
  std::vector<int> v{10,9,8,7,6,5,4,3,2,1};
  int sum = std::accumulate(v.begin(), v.end(), 0);
  int mul = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
  // double result = std::reduce(std::execution::par, v.begin(), v.end());
  // std::cout << "Using reduce: parallel execution: sum = " << result << std::endl;
  std::cout << sum << std::endl;
  std::cout << mul << std::endl;
  std::cout << "is_sorted: " << std::boolalpha << std::is_sorted(v.begin(), v.end(), std::greater<>()) << std::endl;
}
