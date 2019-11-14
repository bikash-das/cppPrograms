#include <iostream>
int add(int x, int y){
    while(y!=0){
        int carry = x & y;
        std::cout << "Carry = " << carry ;
        x = x ^ y;
        std::cout << " x = x^y = " << x;
        y = carry << 1; // add 0 to carry end
        std::cout << " carry << 1: " << y << "\n";
    }
    return x;
}
int main(){
    std::cout << add(20,30) << std::endl;
}