#include <iostream>
#include <iomanip>
int bitswapreqd(int a,int b){
    int counts = 0;
    int c = a ^ b; //find dissimilar bits
    while(c != 0){
        if(c&1 != 0){ //if last bit is one, add one to count
            counts ++;
        }
        //right shift one element
        c = c >> 1;
    }
    return counts;
}
int main(){
    int a , b;
    std::cin >> a >> b;
    std::cout << bitswapreqd(a,b) << "\n";
}