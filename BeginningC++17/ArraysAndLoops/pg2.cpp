//Range based for loop

#include <iostream>
int main(){
  int a[]{1,2,3,4,5,6,7,8};
  for(int n: a){
    std::cout << n << " ";
  }
