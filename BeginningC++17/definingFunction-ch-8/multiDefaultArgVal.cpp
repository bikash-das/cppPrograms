#include <iostream>
#include <iomanip>
#include <string_view>
using std::string_view;
using std::setw;

void message(string_view s = "default value", int a = 20, int b = 30){
  std::cout << s << setw(5) << a << setw(5) << b <<  std::endl;
}

int main(){
  // message(20,30); // won't compile, has to be serially
  message("Override default value");
  message("Override default value", 1000);
  message("Override default value", 1000, 3000);
}
