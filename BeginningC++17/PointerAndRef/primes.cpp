#include <iostream>
#include <iomanip>

int main(){
  const size_t max {100};
  long primes[max] {2L};
  size_t count {1};
  long trial {3L};      //candidate primes
  while(count < max){
    bool isprime {true};
    // std::cout << (count && isprime) << " ";
    for(size_t i {}; i < count && isprime; ++i){        //loop will run till count, provided isprime is true,
        isprime = trial % *(primes + i) > 0;  //logic is divide by only those no which are prime
    }
    if(isprime){
      *(primes + count++) = trial;
    }
    trial += 2; //put on trial only odd numbers
  }
  // output primes 10 to a line
  std::cout << "The first " << max << " primes are: " << std::endl;
  for(size_t i {}; i < max; i++){
    std::cout << std::setw(7) << *(primes + i);
    if((i+1) % 10 == 0)
      std::cout << std::endl;
  }
  std::cout << std::endl;
}
