#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

int main(){
  // std::basic_string<char> s{"hello there"};
  // std::cout << s << std::endl;
  // s.append(" bikash");
  // std::cout << s << std::endl;
  int n{};
  std::cout << "Enter how many numbers you want: ";
  std::cin >> n;
  std::vector <double> vec(n);
  for(unsigned int i = 0; i<n; i++){
    std::cin >> vec[i];
  }
  std::stringstream ss;
  for(unsigned int i = 0; i < n; i++){
    ss << std::setprecision(4) << std::setw(7) << std::right << vec[i];
    if((i+1)%5 == 0)
      ss << std::endl;
  }
  std::string s{ss.str()};
  std::cout << s << std::endl;
}
