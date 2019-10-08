// demonstration template argument deduction for nontype template arguments
#include <iostream>

template <typename T, size_t N>
T average(const T (&array)[N]);

int main(){
    double doubles[2] { 1.0, 2.0};
    std::cout << average(doubles) << "\n"; //value of N is deduced automatically

    double moreDouble[] {1.0, 2.0, 3.0, 4,0};
    std::cout << average(moreDouble) << "\n";
    
    //for this the compiler doesn't create a templte instance, it reuses from 2
    std::cout << average( {1.0, 2.0, 3.0, 4.0}) << "\n";

    int ints[] = {1,2,3,4}; 
    std::cout << average(ints) << "\n";
}

template<typename T, size_t N>
T average(const T (&array)[N]){
    T sum {};
    for(size_t i {}; i < N; ++i)
        sum += array[i];
    return sum/N;
}