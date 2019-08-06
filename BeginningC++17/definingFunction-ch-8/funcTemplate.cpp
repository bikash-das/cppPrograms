#include <iostream>

template <class T>
T greater(T a, T b){
  return a > b? a : b;
}
int main(){
  int a = 20, b = 30;
  std::cout << greater(a,b) << std::endl;
  double var1 = 30.5, var2 = 30.6;
  std::cout << greater(var1, var2) << std::endl;
  std::string s1 = "bikash", s2 = "mahesh";
  std::cout << greater(s1, s2) << std::endl;
}
