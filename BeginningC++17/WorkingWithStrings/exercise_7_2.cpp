/*
Exercise 7-2. Write a program that reads text entered over an arbitrary number of lines.
Find and record each unique word that appears in the text and record the number of
occurrences of each word. Output the words and their occurrence counts. Words and
counts should align in columns. The words should align to the left; the counts to the
right. There should be three words per row in your table.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <map>
#include <set>

int getmaxsize(std::map<std::string, int>& names){
  int len {};
  for(auto name: names){
    if(len < name.first.length())
      len = name.first.length();
  }
  return len;
}

std::vector<std::string> getwordvector(std::string& sentence){
  std::vector<std::string> words{};
  std::string delimiter {" ,;:.\"!?'\n"};
  int start = sentence.find_first_not_of(delimiter);  //starting index which is not any of delimiter
  while (start != std::string::npos){
    int word_end = sentence.find_first_of(delimiter, start + 1);
    if(word_end == std::string::npos){
      word_end = sentence.length(); //we are done
    }
    words.push_back(sentence.substr(start, word_end - start)); // extract word and push in vector
    start = sentence.find_first_not_of(delimiter, word_end + 1);
  }
  return words;
}

int main(){
  std::string sentence{};
  std::cout << "Enter text (# to end)\n";
  std::getline(std::cin, sentence, '#');

  std::vector<std::string> words = getwordvector(sentence);
  std::map<std::string, int> my_map{};  // doesn't maintain order of insertion

  for(auto& word : words){
    my_map[word]++;
  }

  int max_word_size = getmaxsize(my_map);
  int count {};
  for(auto& val: my_map){
    std::cout << std::left << std::setw(max_word_size + 2) << val.first <<  std::right << val.second << std::setw(3) << " ";
    if(!(++count%3)){
      std::cout << "\n";
    }
  }
  std::cout << std::endl;
}
