//https://www.hackerrank.com/challenges/camelcase/problem
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
    string s;
    public:
        Solution(string input): s(input){};
        int camelcase(){
            int count = count_if(s.begin(),s.end(),[](auto c){
                return isupper(c);
            });
            return count+1;
        }
};
int main(){
    string s{};
    cin >> s;
    Solution* obj = new Solution(s);
    cout << obj->camelcase();
}
