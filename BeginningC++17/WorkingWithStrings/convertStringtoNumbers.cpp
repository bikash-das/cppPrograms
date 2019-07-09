// we use std::to_string() to convert a number into string 
#include <iostream>
#include <string>

int main(){
  std::string s {"2.34"};
  double n {std::stod(s)};
  std::cout << s+"10" << std::endl;
  std::cout << n+10 << std::endl;
}
