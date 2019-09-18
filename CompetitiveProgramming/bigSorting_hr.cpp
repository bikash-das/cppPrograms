// https://www.hackerrank.com/challenges/big-sorting/problem
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;
class Solution{
    public:
    void solve(){
        int n {};
        string temp{};
        cin >> n;
        vector<string> v(n);
        for(string& elem : v){
            cin >> elem;    }
        /* if both string size is equal then compare lexicographically
           otherwise compare it's size */ 
        auto compare = [](const string& first, const string& second) {
            return first.size() == second.size() ?
                    first < second : first.size() < second.size();
        };
        sort(v.begin(),v.end(),cref(compare));
        for(const string& elem : v)
            cout << elem << "\n";
    }

};
int main(){
    Solution* obj = new Solution();
    obj->solve();

}