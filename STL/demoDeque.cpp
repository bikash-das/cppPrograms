#include <iostream>
#include <deque>
void print(std::deque<int>& q){
  // std::cout << "Size: " << q.size() << std::endl;
  if(q.size() == 0){
    // std::cout << "Empty" << std::endl;
    return;
  }
  for(auto val : q){
    std::cout << val << " ";
  }
  std::cout << std::endl;
}
int main(){
  std::deque<int> my_deque;
  my_deque.push_front(11);
  my_deque.push_front(12);
  my_deque.push_front(13);
  my_deque.push_front(14);
  my_deque.push_back(15);
  my_deque.emplace_back(20);  // in place
  my_deque.emplace_front(100);  // in place
  print(my_deque);
  my_deque.clear();  // empty deque
  auto newQ = {1,2,3,4,5};
  print(my_deque);
  my_deque.assign(newQ);
  print(my_deque);
}
