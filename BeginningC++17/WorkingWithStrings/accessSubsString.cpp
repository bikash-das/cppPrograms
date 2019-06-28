#include <iostream>
#include <string>
int main(){
  std::string phrase {"The fewer friend the better"};
  std::string extract {phrase.substr(10,6)}; //start from index 10 and extract 6 characters
  std::cout << "Extracted substring: (10,6) -> " << extract << std::endl;
}
