#include <iostream>
#include <deque>
void print(std::deque<int>& q){
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
  print(my_deque);

}
