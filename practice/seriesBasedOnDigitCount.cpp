/*
  An integer N is passed as the input to the program. The prog must print the fibonacci series from 1 to N if the count
  of even digits is greater than or equal to the count of odd digits. Else the prog must print the arithmetic
  progression from 1 to N with the common difference as the sum of odd digits of N
*/
#include <iostream>
#include <tuple>
using ll = unsigned long long int ;

auto count_digits(ll N){
  int even = 0, odd = 0;
  int digit;
  int odd_sum = 0;
  while(N != 0){
    digit = N % 10;
    if(digit % 2 == 0){
      even ++;
    } else{
      odd ++;
      odd_sum += digit;
    }
    N /= 10;
  }
  return std::make_tuple(even,odd,odd_sum);
}

void generate_fibo_series(ll &N){
  ll a = 0, b = 1, sum = 0;
  if(N == 1){
    std::cout << a << std::endl;
    return;
  }
  if(N == 2){
    std::cout << a << " " << b << std::endl;
    return;
  }
  if(N > 2)
    std::cout << a << " " << b << " ";

  for(ll i = 3; i <= N; i++ ){
    sum = a + b;
    a = b;
    b = sum;
    std::cout << sum << " ";
  }
  std::cout << std::endl;
}
void generate_arithmetic_prog(ll N, int d){
  for(ll i = 1; i <= N; i = i+d) {
    std::cout << i << " ";
  }
}
int main(){
  ll N;
  std::cin >> N;
  auto counts = count_digits(N);
  if(std::get<0>(counts) >= std::get<1>(counts)) {
    generate_fibo_series(N);
  }else{
    generate_arithmetic_prog(N, std::get<2>(counts));
  }
}
