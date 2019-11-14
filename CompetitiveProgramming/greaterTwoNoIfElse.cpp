#include <iostream>
using namespace std;
int larger(int a, int b){
    int c = a-b;
    //find msb = k
    int mask = 100000000;
    int k = c & mask;
    if(k == mask){
        k = 1;
    }
    // cout << "k: " << k <<"\n";
    return (1-k)*a + k * b;
}
int main(){
    int a = 200, b = 100;
    cout << larger(a,b) << "\n";
}
