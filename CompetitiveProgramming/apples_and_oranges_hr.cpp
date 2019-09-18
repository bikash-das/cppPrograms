#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    transform(apples.begin(),apples.end(),apples.begin(),[a](auto val){
        return val + a;
    });   
    transform(oranges.begin(),oranges.end(),oranges.begin(),[b](auto val){
        return val + b;
    });   
    auto pr = [&](int val){
        return (val >= s && val <= t);
    };
    int apple = count_if(apples.begin(),apples.end(),pr);
    int orange = count_if(oranges.begin(),oranges.end(),pr);
    cout << apple << "\n" << orange;
}
int main(){
    int s, t,a,b,m,n;
    cin >> s >> t >> a >> b >>m >> n;
    vector<int> apples,oranges;
    int input;
    for(int i = 0; i<m; i++){
        cin >> input;
        apples.push_back(input);
    }
    for(int i = 0; i<n; i++){
        cin >> input;
        oranges.push_back(input);
    }
    countApplesAndOranges(s,t,a,b,apples,oranges);
}