#include <iostream>
#include <numeric>
#include <vector>

int main(){
  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  int sumVec = 0;
  sumVec = std::accumulate(v.begin(), v.end(), 0); //std::accumulate returns a value
  for(int value : v){
    std::cout<< value << " + " ;
  }
  std::cout << "\b\b= " << sumVec << std::endl;
}
