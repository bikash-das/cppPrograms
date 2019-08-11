/* reverse a string using recursion */

#include <iostream>
#include <string>

void reverse(std::string s){
  if(s.size() == 0)
    return;
  else{
    std::cout << s.at(s.size()-1);
    s = s.substr(0,s.size()-1);
    reverse(s);
  }
}
int main(){
  reverse(std::string("hello"));
}
