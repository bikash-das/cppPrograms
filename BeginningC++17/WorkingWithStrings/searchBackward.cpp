// using rfind() to search backward
#include <iostream>
#include <string>

int main(){
  std::string sentence {"Manners maketh man"};
  std::string word {"an"};
  std::cout << sentence.rfind(word) << std::endl;
  if(sentence.rfind(std::string {"bik"}) == std::string::npos){
    std::cout << "Non_existent" << std::endl;
  } 
  std::cout << sentence.substr(sentence.rfind(word), sentence.length()-sentence.rfind(word)) << std::endl;
}
