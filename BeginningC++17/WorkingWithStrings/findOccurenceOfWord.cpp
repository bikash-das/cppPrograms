#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

int main(){
  std::string sentence {};
  std::vector<std::string> words;
  std::cout << "Enter some text terminated by #: \n";
  std::getline(std::cin, sentence, '#');

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
  std::cout << "sentence contains " << words.size() << " words\n";
  std::string find_word {};
  std::cout << "Enter a word to find: ";
  std::cin >> find_word;
  size_t count{};

  for(auto& word : words){
    std::cout << std::setw(15) << word << " (" << count << ")";
    if(!(++count % 5))
      std::cout << std::endl;
  }
  std::cout << "\n";
  count = 0;
  for(auto& word : words){
    if(word.compare(find_word) == 0){
      std::cout << "Word No. " << count << std::endl;
    }
    ++count;
  }
  std::cout << "\n";







}
