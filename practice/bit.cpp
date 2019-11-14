#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int x = 5328;
    cout << "No fo zeros at the beginning of the bit representation: " << __builtin_clz(x) << "\n"; // there is 19 zereos 
    cout << "No of zeros at the end of bit representation: " << __builtin_ctz(x) << "\n";
    cout << "No of one's: " << __builtin_popcount(x) << "\n";
    cout << "the parity (even or odd) of the number of ones in the bit representation: " << 
            __builtin_parity(x) << "\n";
    // vector<long long int> arr {256741038,623958417 ,467905213 ,714532089 ,938071625};
    // solve(arr);
}