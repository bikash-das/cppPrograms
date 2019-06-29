#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
double average(std::vector<double>& values){
  return accumulate(begin(values), end(values), 0) / (1.0 * values.size());
}
int main(){
  std::vector<double> values;
  std::cout << "Enter values (done. to end)\n";
  values.insert(std::begin(values), std::istream_iterator<double>(std::cin), std::istream_iterator<double>());
  std::cout << average(values) << std::endl;
}
