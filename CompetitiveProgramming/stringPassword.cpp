// https://www.hackerrank.com/challenges/strong-password/problem?h_r=next-challenge&h_v=zen
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
class Solution{
    public:
        int solve(string& s){
            map<char,int> m;
            m['d'] = 0;
            m['l'] = 0;
            m['u'] = 0;
            m['p'] = 0;
            // m['s'] = s.size();
            for(char c : s){
                if(isdigit(c)){
                    m['d']++;
                }else if(islower(c)){
                    m['l']++;
                }else if(isupper(c)){
                    m['u']++;
                }else{
                    m['p']++;
                }
            }
            int count ;
           
            count = count_if(m.begin(),m.end(),[](auto v){
                    return v.second == 0;   });
            if(count+s.length()<6){
                count += 6-(count+s.length());
            }
            return count;
        }
};
int main(){
    Solution* obj = new Solution();
    int n ;
    cin >> n;
    string s;
    cin >> s;
    cout << obj->solve(s) << "\n";

}