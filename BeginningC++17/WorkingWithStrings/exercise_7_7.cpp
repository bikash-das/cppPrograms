/*
  Exercise 7-7. Create a program that reads an arbitrarily long sequence of integer
  numbers typed by the user into a single string object. The numbers of this sequence
  are to be separated by spaces and terminated by a # character. In other words, the user
  does not have to press Enter between two consecutive numbers. Next, use a string
  stream to extract all numbers from the string one by one, add these numbers together,
  and output their sum.
*/

#include <iostream>
#include <string>
#include <sstream>

int main(){
  std::string s;
  std::cout << "Enter numbers seperated by spaces and end with '#'" << std::endl;
  std::getline(std::cin, s, '#');
  std::stringstream ss {s};
  int num {};
  int sum{};
  while(ss >> num){ // read values from stringstream using >>, if 40#, it will extract only 40
    sum += num;
  }
  std::cout << "Sum of " << s << ": " << sum << std::endl;

}
