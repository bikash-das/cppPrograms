#include <iostream>
#include <string>
#include <iomanip> // check cplusplus 

using namespace std;

int main(){
    int t;
    cin >> t;
    double a,b,c;
    while(t--){
        cin >> a >> b >> c;
        int temp = static_cast<int>(a);
        cout << "0x" << hex << temp << "\n";
        stringstream ss ;
        if(b > 0){
            ss << setw(15);
            ss <<  setfill('_') << b;
        }
        cout << ss.str();


    }
}