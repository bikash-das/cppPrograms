//working with strings

#include <iostream>
#include <string>
#include <cctype>

void diff_ways_to_initialize(){
  std::string empty;  //empty = ""
  std::string proverb {"Manners Maketh a Man"};
  std::string copy {proverb}; //copied to variable copy
  std::cout << proverb << std::endl;
  std::cout << copy << std::endl;
  std::string part_literal{ "Least said soonest mended.", 5 }; // "Least"
  std::cout << part_literal << std::endl;
  std::string sleeping(5,'z');    //round bracket is used
  std::cout << sleeping << std::endl;
}

void concat_string(){
  std::cout << "Concatenation of strings is done using + operator\n";
  std::string hello {"hello World"};
  std::string world {" to all\n"};
  std::cout << hello + world << std::endl;
  // we can also use append function
  std::string sentence;
  sentence.append(hello).append(" ").append(world);
  std::cout << sentence << std::endl;
  std::string compliment {"~~~ What a Beautiful Name ~~~"};
  sentence.append(compliment,3,22);
  sentence.append(3,'!');
  std::cout << sentence << std::endl;
}
void tostring(){
  std::string s {"Summer of "};
  int x = 69;
  // std::cout << s + x << std::endl; //will not compile
  std::cout << s + std::to_string(x) << std::endl;
}
std::string upper(std::string& s){
  for(auto& ch: s)
    ch = std::toupper(ch);
  return s;
}
std::string input(){
  std::string s;
  std::getline(std::cin, s, '#');
  return s;
}
int main(){
  // diff_ways_to_initialize();
  // concat_string();
  std::string s {"bikash"};
  // std::cout << upper(s) << std::endl;
  std::cout << "Enter a multiline input\n";
  s = input();
  std::cout << s << std::endl;
}
