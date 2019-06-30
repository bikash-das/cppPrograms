/*
  * compare() returns an int, returns +ve if word is greater than,
  * zero is word is equal
  * -ve if word is less
  * word = we are trying to compare with another string, literal, or c style string
*/
#include <iostream>
#include <string>
#include <iomanip>
void compareSubstring(const std::string& text, const std::string& phrase){
  for(size_t i{}; i < text.length() - 3; ++i){
    if(text.compare(i,4,phrase,7,4) == 0)
      std::cout << "text contains '" << phrase.substr(7,4)
               << "' starting at index " << i << std::endl;
  }
}
void select_n_characters(const std::string& text){
  for(size_t i{}; i < text.length() - 3; ++i){
    if(text.compare(i,4, "picket",4) == 0){  //4th arg tells compare 4 characters from picket
      std::cout << "text contains \"pick\" starting at index " << i << std::endl;
    }
  }
}
void comparison_using_substr(const std::string& text, const std::string& phrase){
  for(size_t i{}; i < text.length() - 3; ++i){
    if(text.substr(i,4) == phrase.substr(7,4)){ //code readabile, though requires creation of substring object, but stick with it 
      std::cout << "text contains '" << phrase.substr(7,4)
               << "' starting at index " << i << std::endl;
    }
  }
}
int main(){
  std::string word = "bikash";
  // std::cout << word.compare("bikash"); //if equal returns 0, else integer > 0
  if(!word.compare("bikash")){  //zero converto to false, use !
    std::cout << "equal" << std::endl;
  }else{
    std::cout << "Unequal\n";
  }
  std::string text {"Peter Piper picked a peck of pickled pepper."};
  std::string phrase {"Got to pick a pocket or two"};
  compareSubstring(text,phrase);
  select_n_characters(text);
  comparison_using_substr(text,phrase);
}
