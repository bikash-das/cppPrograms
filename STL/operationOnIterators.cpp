#include <iostream>
#include <iterator>


int main(){
  int data[] {1,2,3,4,5,6};
  auto iter = std::begin(data);
  std::advance(iter, 2);                  //advances to 3th element
  std::cout << "Third elem is "<< *iter << std::endl;

  // no of elements
  int n = std::distance(std::begin(data), std::end(data));
  std::cout << "No of elem is " << n << std::endl;

  // using next()
  auto iter1 = std::begin(data);
  auto fourth = std::next(iter1, 3);
  std::cout << "first elem is "<< *iter1 << " " << "Fouth elem is " << *fourth << std::endl;

  // using prev()
  auto iter2 = std::end(data);
  auto val = *std::prev(iter2,3);
  std::cout << "Using prev(iter2, 3): " << val << std::endl;
}
