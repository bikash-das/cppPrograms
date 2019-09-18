//https://www.hackerrank.com/challenges/grading/problem
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> gradingStudents(vector<int>& grades){
            vector<int> res;
            for(auto val : grades){
                if(val < 38){
                    res.push_back(val);
                }else {
                    int nextMul = val / 5 * 5 + 5;
                    if(nextMul - val < 3){
                        res.push_back(nextMul);
                    }else{
                        res.push_back(val);
                    }
                }
            }
            return res;
               
        }

};

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int input;
    for(int i = 0; i < n;i++){
        cin >> input;
        v.push_back(input);
    }
    Solution* obj = new Solution();
    vector<int> res = obj->gradingStudents(v);
    for(auto val : res){
        cout << val << "\n";
    }
}