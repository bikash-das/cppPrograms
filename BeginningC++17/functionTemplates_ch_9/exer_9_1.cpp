/*
    Exercise 9-1. In C++17, the Standard Library algorithm header gained the handy
    std::clamp() function template. The expression clamp(a,b,c) is used to clamp
    the value a to a given closed interval [ b , c ]. That is, if a is less than b , the result of the
    expression will be b ; and if a is greater than c , the result will be c ; otherwise, if a lies
    within the interval [ b , c ], clamp() simply returns a . Write your own my_clamp() function
    template and try it with a little test program.
*/
#include <iostream>
#include <algorithm>
template <typename T>
T my_clamp(const T& a, const T& b, const T& c){
    return a < b ? b : (a > c) ? c : a;
}
int main(){
    std::cout << my_clamp(1.3,-9.3,30.0) << "\n";
    std::cout << my_clamp(10,20,40) << "\n";

}