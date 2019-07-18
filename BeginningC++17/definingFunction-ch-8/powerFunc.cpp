/* creating my own power function */
#include <iostream>

double power(double x, int n){
  double result {1};
  if(n >= 0){
    for(int i {1};i <= n; ++i){
      result *= x;
    }
  }
  else{
    for(int i {1}; i <= -n; ++i)
      result /= x * 1.0;
  }
  return result;
}

int main(){
  int x {2}, n {-10};
  std::cout << power(x, n) << std::endl;
}
