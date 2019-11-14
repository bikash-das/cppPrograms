#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i<n ;i++){
        cin >> v[i];
    }
    rotate(v.begin(),v.begin()+d, v.end());
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
}