#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>   //for inner product

void getRandomData(std::vector<long long>& data, std::mt19937 &gen){
  for(int i = 0; i < 20; i++){
    data.push_back(gen());
  }
}

int main(){
  std::vector<long long> data;
  std::random_device rd{};
  std::mt19937 gen{rd()};
  getRandomData(data,gen);
  // for(auto value : data){
  //   std::cout << value << " ";
  // }
  // std::cout << min(data) << "\n";
  std::cout << "minimum element: " << *min_element(data.begin(), data.begin()+data.size()) << "\n";
  std::cout << "maximum element: " << *max_element(data.begin(), data.begin()+data.size());

  std::cout << "\n";
  int size = data.size();
  double sum = std::accumulate(data.begin(), data.end(), 0.0);
  double mean = sum / size;
  std::cout << "Sum: " << sum << "\n";
  std::cout << "Mean: " << mean << "\n";
  std::vector<double> diff(size);

  /* output is stored in diff vector,
   and operation performed on each data element is x - mean
     which starts from data.begin() and keeps on incrementing until it reaches data.end(), the 'mean' is passed
     as argument to lambda function
  */
  std::transform(data.begin(), data.end(), diff.begin(), [mean](double x) {
    return x - mean;
  });
  // for(auto v : diff){
  //   std::cout << v << " ";
  // }

  double sq_sum = std::inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);
  std::cout << "Square Sum: " << sq_sum << "\n";
  double standard_deviation = std::sqrt(sq_sum / size);
  std::cout << "Standard deviation: " << standard_deviation << "\n";

  std::normal_distribution<double> normalDist(mean, standard_deviation);
  // int distribute = normalDist(mean,standard_deviation);
  std::cout << normalDist(gen) << "\n";
  // std::vector<int> val(20);
  // for(int i = 0; i < 20; i++){
  //   int num = static_cast<int>(normalDist(data[i]));
  //   if(num >= 0 && num < 20){
  //     val[num]++;
  //   }
  // }
  // for(int n : val){
  //   // std::cout << n << "\n";
  //   std::cout << n << ":" << std::string(n, '*') << "\n";
  // }
//   // std::cout << normalDist << "\n";
//   // std::vector<unsigned long int> ran = gen;
//   // std::string s = gen;
//   // long long max = gen.max();
//   // long long min = gen.min();
//   //  std::uniform_real_distribution<float> dist(1,10);
//   //  std::cout << max << "\n";
//   //  for(auto i = 0; i < 100; i++){
//   //     std::cout << static_cast<int>(dist(gen)) << "\n";
//   //  }
//
 }
