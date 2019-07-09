#include <iostream>
#include <string>

int main(){
  std::string text{};
  std::string word{};
  std::string replacement{};

  std::cout << "Enter a string: (end by *)" << std::endl;
  std::getline(std::cin, text, '*');

  std::cout << "Find the word to replace: ";
  std::cin >> word;

  std::cout << "Enter the word to substitute " << word << " in the text: ";
  std::cin >> replacement;

  // check if word and replacement are same
  if(word.compare(replacement) == 0){
    std::cout << "both the words are same\n";
    std::cout << "Operation aborted\n";
    return 1;
  }

  size_t start {text.find(word)};  // get the index of the word
  while(start != std::string::npos){
    text.replace(start, word.length(), replacement);  // give start index, length of word to replace, and replacement word
    start = text.find(word, start+replacement.length()); // find again, start from replacement.length()
  }
  std::cout << text << std::endl;

}
