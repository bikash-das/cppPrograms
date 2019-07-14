/*
  Exercise 7-5. Generalize the program of anagram such that it ignores spaces when
  deciding whether two strings are anagrams. With this generalized definition, funeral
  and real fun are considered anagrams, as are eleven plus two and twelve plus one,
  along with desperation and a rope ends it.
*/

#include <iostream>
#include <string>
#include <map>

void modify_string(std::string& s){
  for(int i = 0; i < s.length(); i++){
    if(s[i] == ' '){
      s.erase(i,1);
    }
  }
}
int main(){
  std::string word_1 {};
  std::cout << "Enter first word: ";
  std::getline(std::cin, word_1);
  modify_string(word_1);
  
  std::string word_2 {};
  std::cout << "Enter second word: ";
  std::getline(std::cin, word_2);
  modify_string(word_2);

  if(word_1.length() == word_2.length()){
      std::map<char, int> word_1_map{};
      std::map<char, int> word_2_map{};
      for(auto& c: word_1)
        word_1_map[std::tolower(c)]++;
      for(auto& c: word_2)
        word_2_map[std::tolower(c)]++;
      if(word_1_map == word_2_map){
        std::cout << "Anagrams" << std::endl;
      }
      else{
        std::cout << "Not Anagrams" << std::endl;
      }
    }else{
      std::cout << "Length Mismatch" << std::endl;
    }
}
