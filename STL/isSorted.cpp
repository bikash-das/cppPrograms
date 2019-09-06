#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main(){
  std::vector<int> data {1,2,3,4,5};
  std::cout << "data is "
            << (std::is_sorted(data.begin(), data.end()) ? "" : "not ")
            << "in ascending order.\n";
  std::vector<std::string> veg {"aloo", "baigain", "cucumber", "piyaj", "tamater","garlic"};
  std::copy(veg.begin(), veg.end(), std::is_sorted_until(veg.begin(), veg.end(),
          std::ostream_iterator<std::string> {std::cout, " "})));

}
  
