#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int binary(int val){
    //change to binary and return
    return 0;
}
int main(){
    string a {};
    cout << "Enter the number: ";
    cin >> a;
    try
    {
        int val = stoi(a);
        // cout << binary(val) << "\n";
        cout << setbase(2) << showbase << val << "\n";        
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error" << endl;
    }
}
    