#include <iostream>
#include <string>
int main(){
  std::string sentence {"There was a 'cold' day."};
  std::string separators {" ,.\"\'"};
  std::cout << sentence << std::endl;
  int x = sentence.find_first_not_of(separators);
  int y = sentence.find_first_of(separators);
  std::string word {sentence.substr(x,y)};  //start from x, extract y characters
  std::cout << word << std::endl;
  int v = sentence.find_first_not_of(separators, y);
  int w = sentence.find_first_of(separators, v);
   word = sentence.substr(v, w-v);
  std::cout << word << std::endl;
}
