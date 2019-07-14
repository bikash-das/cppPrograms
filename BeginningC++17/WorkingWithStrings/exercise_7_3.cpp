/*
Exercise 7-3. Write a program that reads a text string of arbitrary length from the
keyboard and prompts for entry of a word that is to be found in the string. The
program should find and replace all occurrences of this word, regardless of case,
by as many asterisks as there are characters in the word. It should then output
the new string. Only whole words are to be replaced. For example, if the string is
"Our house is at your disposal." and the word that is to be found is "our" , then
the resultant string should be as follows: "*** house is at your disposal." and not
"*** house is at y*** disposal." .
*/

#include <iostream>
#include <string>
#include <vector>

void replace_word_with_asterisk(std::string& text, std::string& word){
  // sample string: our house is at your disposal
  // word: our
  // output: *** hourse is at your disposal
  std::string delimiter {" ,./?\""};
  int start = text.find_first_not_of(delimiter);
  while(start != std::string::npos){
    int end = text.find_first_of(delimiter, start+1);
    if(end == std::string::npos){
      end = text.length();  //end traversing
    }
    // extracted_word = text.substr(start, end - start); // you have the word, now check
    if(word.compare(text.substr(start, end - start)) == 0){
      text.replace(start, end-start, word.length(), '*'); // if you omit word.length(), then it will replace with one asterisk
    }
    start = text.find_first_not_of(delimiter, end + 1);
  }
  std::cout << start << std::endl;
}
int main(){

  std::string text{};
  std::cout << "Enter arbitrary length of text (# to end)" << std::endl;
  std::getline(std::cin, text, '#');

  std::string word{};
  std::cout << "Enter a word to find: ";
  std::cin >> word;

  replace_word_with_asterisk(text, word);
  std::cout << text << std::endl;


}
