#include <iostream>

using object_t = int;

struct some_t{
  object_t member_;
};
some_t func(){
  return {5};
}
int main(){
    //guessing the output
    some_t x = {0};
    x = func();
    std::cout << x << std::endl;
}
