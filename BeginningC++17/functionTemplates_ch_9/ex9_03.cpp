/*
  q3. Exercise 9-3. Write a function template plus() that takes two arguments of potentially
    different types and returns a value equal to the sum of both arguments. Next, make
    sure that plus() can be used as well to add the values pointed to by two given
    pointers.
*/
#include <iostream>
#include <string>

template<typename T, typename P>
decltype(auto) plus(T a, P b){
    return a + b;
}
template<>
decltype(auto) plus<int*>(int* a, int* b){
    return *a + *b;
}
using std::string;
using std::cout;
int main(){
    cout << plus(10,30.40) << "\n";
    string f_name = "bikash";
    string s_name = "das";
    cout << plus(f_name,s_name) << "\n";
    int a = 20,b=30;
    cout << plus(&a,&b) << "\n";
}