#include <iostream>
#include <string_view>

using std::string_view;
void message(string_view s = "hello world"){
  std::cout << s << std::endl;
}
int main(){
  message(); //default value is used
  message("Override default Value");
}
