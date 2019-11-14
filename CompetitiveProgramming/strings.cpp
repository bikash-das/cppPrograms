#include <iostream>
#include <string>
using namespace std;
void solve(string& a, string& b){
    cout << a.length() << " " << b.length() << "\n";
    cout << a + b << "\n";
    swap(a[0],b[0]);
    cout << a << " " << b;    
}
int main(){
    string a,b;
    cin >> a >> b;
    solve(a,b);
}