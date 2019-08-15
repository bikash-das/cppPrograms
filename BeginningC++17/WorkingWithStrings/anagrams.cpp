
/*  Exercise 7-4. Write a program that prompts for the input of two words and
  determines whether one is an anagram of the other. An anagram of a word is
  formed by rearranging its letters, using each of the original letters preci
  -sely once. For instance, listen and silent are anagrams of one another,
  but listens and silent are not. */

#include <iostream>
#include <string>
#include <map>
int main(){
  std::string word_1 {};
  std::cout << "Enter first word: ";
  std::cin >> word_1;

  std::string word_2 {};
  std::cout << "Enter second word: ";
  std::cin >> word_2;

  if(word_1.length() != word_2.length()){
    std::cout << "Not Anagrams\n";
    return 0;
  }
  /* count frequency of each letters and check */
  std::map<char, int> word_1_map{};
  std::map<char, int> word_2_map{};
  for(auto& c: word_1)
    word_1_map[std::tolower(c)]++;
  for(auto& c: word_2)
    word_2_map[std::tolower(c)]++;
  if(word_1_map == word_2_map){
    std::cout << "Anagrams" << std::endl;
  }
  else
    std::cout << "Not Anagrams" << std::endl;
}
