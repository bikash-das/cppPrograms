#include <iostream>
#include <string>

int main(){
  std::string word = "bikash";
  if(word.find('b') == std::string::npos){
    std::cout << "Character not found!" << std::endl;
  }
  std::string sentence = "The quick brown fox jumps over the lazy dog";
  word = "he";
  int count {};
  for(size_t i{}; i < sentence.length() - word.length();){
    // find scans whole sentence, if found returns the index
    // else return std::string::npos
    size_t position = sentence.find(word, i); //find word start with index i and return the index of the first occurence if found
    std::cout << "Found at Position :: " << position << std::endl;
    if(position == std::string::npos){
      std::cout << "Not found from index " << i << std::endl;
      std::cout << "break from here\n";
      break;   //not found break
    }
    ++count;
    i = position + 1; //found at index positon, now start finding from position + 1
  }
  std::cout << "\"" << word << "\"" << " occurs in " << "\"" << sentence
            << "\" " << count << " times" << std::endl;
}

/*
 * another variation of find()
 * sentence.find(cstyle string, start pos, no of character)
 * eg: sentence.find('akat', 1, 2);
 *  start from index 1, search for 2 character, 'ak' in sentence
 */
