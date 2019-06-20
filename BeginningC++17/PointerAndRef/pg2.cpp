#include <iostream>
#include <array>
int main(){
  double values[10] = {1,2,3};
  std::array<double,10> val{};
  val.fill(10.0);

  double *pVal = values;
  std::cout << pVal << std::endl;
  pVal += 1; //advance to next memory block depending on double size
  std::cout << pVal << std::endl;
  std::cout << *(pVal + 1) << std::endl; //print next value but pValue doesn't change
  std::cout << pVal << std::endl;

}
