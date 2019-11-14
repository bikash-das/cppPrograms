#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    using ll = long long;
    int Q;
    cin >> Q;
    ll x;
    int y;
    set<ll> myset;
    for(int i = 0; i<Q; i++){
        cin >> y;
        if(y == 1){
            //add
            cin >> x;
            myset.insert(x);
        }else if(y == 2){
            //delete
            cin >> x;
            myset.erase(x);
        }else if(y == 3){
            //search
            cin >> x;
            if(myset.find(x) != myset.end()){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
}