// modifying a string using insert() and replace()
#include <iostream>
#include <string>
#include <iomanip>
void insert(){
  std::string phrase {"We can insert a string"};
  for(char c: phrase){
    std::cout << std::setw(3) << c << " ";
  }
  std::cout << std::endl;
  for(int i = 0; i < phrase.length(); i++){
    std::cout << std::setw(3) << i << " ";
  }
  std::cout << std::endl;
  std::cout << "********************************************" << std::endl;
  std::cout << "Inserting at Position 14 of \"" << phrase << "\"" << std::endl;
  std::cout << "Old String: " << phrase << std::endl;
  std::string words {"(a string into) "};
  phrase.insert(14, words); // insert words in phrase at pos 14
  std::cout << "New String: " << phrase << std::endl;
}
void insert_variants(){
  std::string phrase {"Hello World"};
  /*
   * insert at pos 4, "bikash".substr(2,3)
  */
  phrase.insert(4, std::string {"bikash"}, 2, 3);
  std::cout << phrase << std::endl;

  // insert asterisk
  phrase.insert(phrase.length(), 7, '*');
  std::cout << phrase << std::endl;
}
int main(){
  // insert();
  insert_variants();
}
