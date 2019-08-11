#include <iostream>
#include <string>

std::string& larger(std::string& s1, std::string& s2){
  return s1 > s2? s1 : s2;
}

int main(){
  std::string str1 {"abcx"};
  std::string str2 {"adcf"};
  larger(str1, str2) = "defg"; //larger gets assigned "defg"

  std::cout << "str1: " << str1 << std::endl << "str2: " << str2 << std::endl;
}
