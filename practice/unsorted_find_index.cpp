#include<iostream>
#include <map> 
using namespace std;
int main(){
    multimap<int,int> m {};  //multimap supports dupicates
    int n ;
    cout << "Enter number of elemenets: ";
    cin >> n;
    int input;
    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++){
        cin >> input;
        m.insert(make_pair(input,i));
    }
    for(auto& p : m){
        cout << p.first << " " << p.second << "\n";
    }

}