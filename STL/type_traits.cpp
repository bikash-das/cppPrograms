#include <iostream>
#include <type_traits>
class hello{
public:
  virtual void disp()=0; //pure virtual = abstract class, can't create object
};
class hello_inherit: public hello{
public:
  void disp(){
    std::cout << "inherit" << std::endl;
  }
};
int main(){
  bool a  = 0;
  std::cout << std::boolalpha << a << std::endl;
  std::cout << std::is_integral<int>::value << "\n";
  hello_inherit *p = new hello_inherit();
  p->disp();
  hello *z= new hello_inherit();
  z->disp();
  
}
