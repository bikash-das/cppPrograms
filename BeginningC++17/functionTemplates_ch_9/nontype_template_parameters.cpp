#include <iostream>

template<int lower, int upper, typename T1>
bool is_in_range(const T1& value){
    return (value >=lower) && (value <= upper);
}

int main(){
    std::cout << std::boolalpha << is_in_range<10,100>(60) << "\n";
    std::cout << std::boolalpha << is_in_range<0,1000000>(1300) << "\n";
}