/* member select through pointer */
#include <iostream>
#include <vector>
int main(){
  std::vector<int> v;
  auto* number = &v;

  for(int i {1}; i<10; i++){
    (*number).push_back(i*10);   //enclose in bracket, . has higher precedence
  }
  //add some more values
  for(int i{10}; i < 20; i++){
    number->push_back(i*10);
  }
  for(auto n: *number){
    std::cout << n << " ";
  }
  std::cout << std::endl;
  //inserted at vector v;
  for(auto n: v){
    std::cout << n << " ";
  }
  std::cout << std::endl;
}
