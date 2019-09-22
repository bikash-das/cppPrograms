#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        auto solve(int n, string& s){
            map<char,int> m;
            for(auto& c : s)
                m[c]++;  
            int count = 0;
            vector<char> notEven;
            for(auto& val : m){
                if(val.second%2 != 0){
                    count++;
                    notEven.push_back(val.first);                    
                }
            }
            if(count == 1){
                return 0;
            }else if(count == 0){
                return -1;
            }else{
                //confusion lies here! first check A,it all test cases passes, then comment A and uncomment B and check.
                // if neither works sorry! If both works, go for B
                // A
                vector<int> index;
                for_each(notEven.begin(),notEven.end(),[&](const auto& v){
                    index.push_back(s.find_first_of(v));
                });
                sort(index.begin(),index.end());
                return index[index.size()-1]-index[0];

                // B  
                // int first = s.find_first_of(notEven[0]);
                // int last = s.find_first_of(notEven[notEven.size()-1]);
                // return last-first;
            
            }           
        }
};
int main(){
    int n ;
    cin >> n;
    string s;
    cin >> s;
    assert(n == s.size());

    Solution obj;
    cout << obj.solve(n,s) << "\n";
}