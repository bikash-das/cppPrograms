/*
    Exercise 9-4. Write your own version of the std::size() family of functions called
    my_size() that work not only for fixed-size arrays but also for std::vector<> and
    std::array<> objects. You are not allowed to use the sizeof() operator.
*/
#include <iostream>
#include <vector>
template <typename T>
decltype(auto) my_size(T data[]){
    return (*(&data+1)-data); //not working
}
template<typename T>
int my_size(const std::vector<T>& v){
    return v.size();
}
using std::cout;
int main(){
    int arr[] = {1,2,3,4,5,6};
    cout << my_size(arr) << "\n";
}