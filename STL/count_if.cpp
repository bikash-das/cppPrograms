  #include <iostream>
  #include <algorithm>
  #include <vector>
  int main(){
    std::vector<int> vec{1,2,3,4,5,6,7,6,8,29,39};

    int n = std::count_if(vec.begin(), vec.end(), [](auto e) {
      return e > 5;  // count if vec value is > 5
    });
    std::cout << n << std::endl;
  }
