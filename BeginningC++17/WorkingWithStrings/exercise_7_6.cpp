/*
  Exercise 7-6. Write a program that reads a text string of arbitrary length from the
  keyboard followed by a string containing one or more letters. Output a list of all the
  whole words in the text that begin with any of the letters, uppercase or lowercase.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> getwordvector( const std::string& sentence, std::string word){
  std::vector<std::string> words{};
  std::string w{};
  std::transform(word.begin(), word.end(), word.begin(), ::tolower);
  std::string delimiter {" ,?.\""};
  int start = sentence.find_first_not_of(delimiter);  //starting index which is not any of delimiter
  while (start != std::string::npos){
    int word_end = sentence.find_first_of(delimiter, start + 1);
    if(word_end == std::string::npos){
      word_end = sentence.length(); //we are done
    }
    std::string w = sentence.substr(start, word_end - start);
    if(word.find_first_of(std::tolower(w.at(0))) != std::string::npos){
      words.push_back(w);
    }
    start = sentence.find_first_not_of(delimiter, word_end + 1);
  }
  return words;
}
int main(){
  std::string text{};
  std::cout << "Enter text: (# to end)" << std::endl;
  std::getline(std::cin, text, '#');

  std::string word {};
  std::cout << "Enter a string (with one or more letters)" << std::endl;
  std::cin >> word;
  // std::transform(word.begin(), word.end(), word.begin(), ::tolower);
  std::vector<std::string> wordVec = getwordvector(text, word);

  for(auto& w: wordVec){
    std::cout << w << " ";
  }
  std::cout << std::endl;
}
