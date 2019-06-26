/*
Exercise 6-4. Repeat the calculation in Exercise 6-3 but using a vector<> container
allocated in the free store. Test the program with more than 100,000 elements. Do you
notice anything interesting about the result?
*/

#include <iostream>
#include <vector>
#include <cmath>

int main(){
  int size {};
  std::cout << "Enter size?\n";
  std::cin >> size;
  float sum {0.0};
  auto *arr {new std::vector<float>{}};
  auto *p = arr;
  for(int i = 0; i < size; i++){
    // (*p).push_back(1.0 / pow(i+1,2));
    float temp = 1.0 / pow(i+1,2);
    p->push_back(temp);
    sum += temp;
  }
  std::cout << sqrt(sum*6) << std::endl;
}
