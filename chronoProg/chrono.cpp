#include <iostream>
#include <chrono>

long long fac(int n){
  if (n==0){
    return 1;
  }else{
    return n * fac(n-1);
  }
}

int main(){
  int n;
  std::cout << "Enter n?\n";
  std::cin  >> n;

  // creating an high_resolution_clock::time_point object to store start time and end time
  std::chrono::high_resolution_clock::time_point startTime = std::chrono::high_resolution_clock::now();
  std::cout << fac(n) << std::endl;
  std::chrono::high_resolution_clock::time_point endTime = std::chrono::high_resolution_clock::now();

  // calculating difference

  auto nanosec  = std::chrono::duration_cast <std::chrono::nanoseconds> ( endTime - startTime ).count();
  auto microsec = std::chrono::duration_cast <std::chrono::microseconds> ( endTime - startTime ).count();
  auto millisec = std::chrono::duration_cast <std::chrono::milliseconds>  ( endTime - startTime ).count();
  std::cout << "Nanosecond  : " << nanosec  << std::endl;
  std::cout << "Microsecond : " << microsec << std::endl;
  std::cout << "Millisecond : " << millisec << std::endl;

  return 0;
}
