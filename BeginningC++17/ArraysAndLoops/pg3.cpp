// to count vowels and consonants from a multiline strings
#include <iostream>
#include <string>
#include <cctype> //for using std::tolower() and std::isalpha()
int main(){
  const int max_length {100};
  char text[max_length] {};
  std::cout << "Enter a sentence: (# to mark end)\n";
  std::cin.getline(text, max_length, '#');
  std::cout << "You Entered: " << std::endl;
  std::cout << text << std::endl;
  int vCount {}, cCount {};
  for(int i = {}; text[i] != '\0'; i++){
    char c = text[i];
    if(std::isalpha(c)){
      c = std::tolower(c);
      switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          ++vCount;
        break;
        default:
          ++cCount;
      }
    }
  }
  std::cout << "Your input contained " << vCount << " vowels and " << cCount << " consonants. " << std::endl;
}
