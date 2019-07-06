#include <iostream>
#include <string>

int main(){
  std::string text {"hello it's me bikash"};
  std::string name {"Mahesh"};
  int find_bikash = text.find(std::string{"bikash"});
  text.replace(14,std::string{"bikash"}.length(), name);
  std::cout << text << std::endl;
}
