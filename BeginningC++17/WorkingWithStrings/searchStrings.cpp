#include <iostream>
#include <string>




int main(){
  std::string s = "bikash";
  std::cout << s[0] ;  //print b
  int index = 3;
  std::cout << s[index] << std::endl;  //print a
  char ch = 'z';
  std::cout << s.find(ch) << std::endl;
  std::cout << s[s.find(ch)] << std::endl; // std::string::npos
  std::cout << s.find("kas") << std::endl;


}
