#include <functional>
#include <iostream>

template<typename T>
extern void func(T);

void lippincott(){
  try{
    throw;
  } catch (const std::range_error &){
    std::clog << "range_error\n";
  }catch (const std::runtime_error &){
    std::clog << "runtime_error\n";
  }catch (const std::bad_function_call &){
    std::clog << "bad_function_call\n";
  }catch (...){
    std::clog << "exception\n";
  }
}
template<typename T>
struct S{
  static void do_thing(){
    try{
      func(T{});
    }catch(...){
      lippincott();
    }
  }
};
int main(){
  int x, y = 0;
  try{
    S<int> b;
    b.do_thing();
  }catch(...){
    lippincott();
  }

}
