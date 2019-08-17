/* Count no of student above average */
#include <iostream>
#include <vector>       /* for vector */
#include <algorithm>    /* for accumulate() and count_if() */
#include <random>       /* for random number generation */

int count_above(const std::vector<int>& vec){
  double avg {0.0};
  /* find average marks */
  avg = std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size();
  /* count marks above average and return */
  return std::count_if(vec.begin(), vec.end(), [&](int i){return i > avg;});
}
void print(const std::vector<int>& marks){
    std::cout << "Random Marks: ";
    for(auto &m : marks)
        std::cout << m << " ";
    std::cout << "\n";
}
void generate_marks(std::vector<int>& marks,int size){
    std::random_device rd; /* obtain a random number from hardware */
    std::mt19937 seed(rd()); /* seed the generator */
    std::uniform_int_distribution<> distribute(0,100); /* define range */
    for(int i = 0; i < size; i++)
        marks.push_back(distribute(seed));
}
int main(){
  int no_of_stud = 30;
  std::vector<int> marks {no_of_stud};
  generate_marks(marks, no_of_stud);
  print(marks);
  std::cout << "Number of students above average = "
            << count_above(marks) << std::endl;
}
