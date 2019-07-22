/* creating my own power function */
#include <iostream>

double power(double base, int exponent){
  double result {1.0};
  if(exponent >= 0){
    for(int i {1};i <= exponent; ++i){
      result *= base;
    }
  }
  else{
    for(int i {1}; i <= -exponent; ++i)
      result /= base;
  }
  return result;
}

int main(){
  double base {2.0}, exponent {-10};
  std::cout << power(base, exponent) << std::endl;
}
