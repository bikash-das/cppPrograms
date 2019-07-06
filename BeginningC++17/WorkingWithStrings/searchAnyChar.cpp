#include <iostream>
#include <string>
int main(){
  std::string sentence {"The quick brown fox jumps over the lazy dog"};
  std::string separators {" ,.\"\'"};
  std::cout << sentence << std::endl;
  int x = sentence.find_first_not_of(separators);
  int y = sentence.find_first_of(separators);
  std::cout << x << y << std::endl;
  std::string word {sentence.substr(x,y)};  //start from x, extract y characters
  std::cout << word << std::endl;
  int v = sentence.find_first_not_of(separators, y);
  int w = sentence.find_first_of(separators, v);
  word = sentence.substr(v, w-v);
  std::cout << word << std::endl;
  if(sentence.find_first_not_of("AaEeIiOoUu") != std::string::npos){
    std::cout << sentence.find_first_not_of("AaEeIiOoUu") << std::endl;

  }


}
