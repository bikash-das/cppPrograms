#include <chrono>
#include <iostream>
#include <random>
#include <vector>


int main(){
  unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
  std::default_random_engine e(seed);
  std::cout << e() << "\n";

  /* uniform distribution between range 0-5 */
  std::uniform_int_distribution<int> distr(0,5);  //0,1,2,3,4,5
  std::cout << distr(e) << "\n";

  std::uniform_real_distribution<double> distR (0,5); /* 5 is not included but 0 is */
  std::cout << distR(e) << "\n";
  // std::cout << string(10,'*') << "\n";

  std::poisson_distribution<int> distPoi(1.0);   /* needs argument, MEAN */
  std::cout << distPoi(e) << "\n";

  std::cout << "Testing Normal Distribution \n";
  std::normal_distribution<double> distNormal(10.0, 5.0);  /* takes mean and standard deviation */
  std::vector<int> val(20);
  for(int i = 0; i < 800; i++){
    int num = static_cast<int>(distNormal(e));
    if(num >= 0 && num < 20){
      val[num]++;
    }
  }
  for(int n : val){
    // std::cout << n << "\n";
    std::cout << n << ":" << std::string(n, '*') << "\n";
  }
}
