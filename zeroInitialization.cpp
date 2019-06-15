#include <iostream>
#include <cmath>
#include <string>
#include <vector>
// #include <execution> //for parallel algorithms
#include <algorithm>
using bigint = long int; //works in 11, 14, 17 same as typedef
int main(){
  int counter {}; //thisiszero initialization, by default counter now has 0 in it
  std::cout << counter << std::endl;
  int literalInt {12'000}; //compiles with c++1z and c++14 and not with c++11
  double a{ 1.5}, b{}, c{};
  double result {a/b};
  std::cout << a << "/" << b << " = " << result << std::endl;
  std::cout << result << " + " << a << " = " << result + a << std::endl;
  if(std::isinf(result)){
    std::cout << "result is inf" << std::endl;
  }
  std::cout << "inf / inf = " << result / result+a << std::endl;
  result = b/c;
  if(std::isnan(result)){
    std::cout << "yes result is nan \n";
  }
  std::cout << b << "/" << c << " = " << result << std::endl;


  // numeric limits, compiles with c++1z only
  std::cout << "upper bound and lower of double\n" << std::numeric_limits<double>::max() << " ";
  std::cout << std::numeric_limits<double>::min() << std::endl;

  //
  std::cout << std::numeric_limits<int>::infinity() << std::endl;
  // std::cout << std::numeric_limit<double>::quiet_NaN() << std::endl;

  //character wchar_t for unicode character
  wchar_t wch {L'\x0438'}; //prefix with L
  std::cout << wch << std::endl;
  char16_t cyc {L'\x0438'};  //char16_t /32_t for handling unicode characters in a cross-platform manner
  std::wcout << cyc << std::endl;

  std::vector<std::string> v{"bikash", "barsha", "ankita", "mritunjay"};
  std::sort(std::execution::par, v.begin(), v.end());

}
