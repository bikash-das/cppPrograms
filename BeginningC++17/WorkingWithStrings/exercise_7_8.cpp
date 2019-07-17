/*
  Exercise 7-8. Repeat Exercise 7-7, only this time the user inputs the numbers one by
  one, each time followed by an enter. The input should be gathered as a sequence of
  distinct strings—for the sake of the exercise still not directly as integers—which are
  then concatenated to a single string. The input is still terminated by a # character. Also,
  this time, you’re not allowed to use a string stream anymore to extract the numbers
  from the resulting string.
*/
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<double> getNum (std::string sentence){
  std::vector<double> numbers{};
  std::string delimiter {" ,;:.\"!?'\n"};
  int start = sentence.find_first_not_of(delimiter);  //starting index which is not any of delimiter
  while (start != std::string::npos){
    int word_end = sentence.find_first_of(delimiter, start + 1);
    if(word_end == std::string::npos){
      word_end = sentence.length(); //we are done
    }
    numbers.push_back(std::stod(sentence.substr(start, word_end - start))); // extract word and push in vector

    start = sentence.find_first_not_of(delimiter, word_end + 1);
  }
  return numbers;
}

int main(){
  std::string s{};
  std::cout << "Enter numbers one line at a time and end it with #" << std::endl;
  std::getline(std::cin, s, '#');

  std::vector<double> numbers = getNum(s);
  double sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  std::cout << "Sum : " << sum << std::endl;
}
