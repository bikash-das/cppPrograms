#include <iostream>

int main(){
  const char *s1 = {"hello it's me Bikash"};
  const char *s2 = {"And I'm from Siliguri"};

  //swap
  const char *temp = s1;
  std::cout << "\n" << *temp << "\n";
  std::cout << "Swapped\n";
  s1 = s2;
  s2 = temp;
  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;

}
