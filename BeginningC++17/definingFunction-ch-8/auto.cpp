#include <iostream>
#include <string_view>
#include <string>

auto getFirstCharacter(std::string text){
  if(text.empty())
    return std::string{" "};    // need to typecast, compiler is confused.
  else
    return std::string{text.substr(0, 1)};
}
int main(){
  std::string text ("hello");
  std::string output = getFirstCharacter(text);
  std::cout << output << std::endl;

}
