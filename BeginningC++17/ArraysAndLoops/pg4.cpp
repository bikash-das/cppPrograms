// array<T,N> containers and std::vector<T> v;
#include <iostream>
#include <array>
#include <vector>

int main(){
  std::array<double, 100> values{19.0,3.0,2.0,39.5}; //rest all values is set to 0.0
  std::array<double, 100> values2 {};
  values2.fill(3.14159265);  //set all elements to pi
  std::cout << values2.size() << std::endl;

  //since array<> object is a range, we can use range based for loop
  double total {};
  for(auto val: values){
    total += val;
  }
  std::cout << total << std::endl;

  //print using at func also at throws error when trying to access out of range index
  std::cout << values.at(3) << std::endl;
  //access first and last elements
  std::cout << "first: " << values.front() << " Last: " << values.back() << std::endl;

  // vector
  std::vector<long> val(20, 99L); //vec of 20, containing 99 long numbers
  for(auto v : val)
    std::cout << v << " ";
  std::cout << "\n";
  //to change contents , it provides assign unlike array that has fill()
  val.assign(10,100L); //resized and contains 100 in all locations
  for(auto v: val)
    std::cout << v << " ";
  std::cout << "\n";

  std::vector<long> v1;
  v1.assign({99L,20L}); //vector contains 2 long values - 99 and 20
  for(auto v: v1)
    std::cout << v << " ";
  std::cout << "\n";

  //to remove all the elements
  v1.clear();
  std::cout << v1.size() << "\n"; //size is now 0 after clearing all the no's
  //check if vector is empty
  if(std::empty(v1))
    std::cout << "Yes it's empty after applying clear()\n";
}
