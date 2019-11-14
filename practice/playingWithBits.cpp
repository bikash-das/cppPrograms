#include <iostream>
using s = unsigned short;
int main(){
  unsigned short number {16387};
  std::cout << sizeof(number) << " bytes" << std::endl;
  //shift left by 2 bit positions
  auto result {static_cast<s> (number << 2)}; //without casting, it is treated as int
  std::cout << result << std::endl;
  // std::cout << std::to_binary(number) << std::endl;
  unsigned short n {12345};
  //modify the original number
  n >>= 2; //shift right two positions

  //AND operators
  // unsigned short font {0x064C};    //style 6, italic, 12 point
  //in c++14 onwards we can write like this
  unsigned short font {0b00000110'0'10'01100};  //style 6, italic, 12 point
  //to get the different parts use masks
  unsigned short size_mask {0x1F};    //the first low-order bits represent its size like 01100 above
  //extract
  auto size {static_cast<s> (font & size_mask)};
  std::cout << size << std::endl;

  //we can extract the style but here we have to shift the value also
  s style_mask {0xFF00};  // 1111 1111 0000 0000
  auto style {static_cast<s> ((font & style_mask) >> 8)}; //pointing right means right shift

  // OR operator
  //italic bit is 7th bits
  // bold bit is 6th bit
  // turn it on, maeke it 1
  auto italic {static_cast<unsigned short> (1u << 6)};   //7th bit from the right
  auto bold {static_cast<unsigned short> (1u << 5)};     //6th bit from the right
  //make bold bit on
  font |= bold;     //set bold

  //efficient way to apply mask is to take complement
  //or else you need to know exaclty which position to apply mask which lacks portability
  font &= ~bold;  //turn bold off

  font &= ~bold & ~italic;    //turn bold and italic off
  //the above statement can be written as
  // font &= ~(bold | italic); //some a' . b' = (a+b)'
  std::cout<< std::hex << font << std::endl;


}
