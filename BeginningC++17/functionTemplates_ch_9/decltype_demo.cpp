template <typename T1, typename T2>
auto larger(T1 a, T2 b) -> decltype(a>b ? a:b){
    return a > b ? a : b;
}
// the above code can be tedious to write, we can simplify
// using decltype(auto) introduced in c++14
template<typename T1, typename T2, typename T3>
decltype(auto) larger(T1 a, T2 b){
    return a > b ? a : b;
}

#include <iostream>
int  main(){

    std::cout << larger(100.2,34) << "\n";
}