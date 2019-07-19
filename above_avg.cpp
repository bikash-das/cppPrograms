/* count how many students marks are above average */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
int getAvg(std::vector<int>& vec){
  double avg {0.0};
  avg = std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size();
  std::cout << "Average: " << avg << std::endl;
  int count = std::count_if(vec.begin(), vec.end(), [&](int i){return i > avg;});

  return count;
}
int main(){
  std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
  std::cout << getAvg(vec) << std::endl;

}
