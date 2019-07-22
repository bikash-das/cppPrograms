#include <iostream>
double avg(const double* array, size_t size);

int main(){
  double a[] {1,2,3,4,5,6,7,8,9,10};
  std::cout << avg(a, 10) << std::endl;
}

double avg(const double* array, size_t size){
  double sum = 0.0;
  for(size_t i = 0; i < size; i++){
    sum += *array++;

  }
  return sum/size;
}
