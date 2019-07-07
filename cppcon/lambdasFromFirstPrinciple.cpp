#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using object = std::map<std::string, int>;

class Plus{
  int value;
public:
  Plus(int v): value(v){};
  int operator() (int x) const{
    return value + x;
  }
};

//closure without garbage collection

void sort_by_property(std::vector<object>& v, std::string prop){
  auto pless = [p = prop] (object& a, object& b){  // p = prop by value, to make it by ref, &p = prop or p = std::ref(prop) -> not advised
    return a[p] < b[p];
  };
  std::sort(v.begin(), v.end(), pless);
}

int main(){
  auto plus = Plus(20);
  auto x = plus(20);
  std::cout << x << std::endl;

  //using lambda to remove boilerplate code
  // anonymous class object that behaves the same
  auto plusLam = [value = 1] (int x){
    return x + value;
  };
  auto val = plusLam(20);
  std::cout << val << std::endl;
}
