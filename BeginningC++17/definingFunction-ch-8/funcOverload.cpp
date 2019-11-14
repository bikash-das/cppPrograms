#include <iostream>
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
int main(){
    float a = 20.0,b=30;
    std::cout << add(a,b) << std::endl;
}