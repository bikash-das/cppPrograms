//https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int k;
    int input;
    vector<vector<int> > arr; //vec of vec
    for(int i = 0; i<n; i++){
        cin >> k ;
        vector<int> temp;
        for(int j = 0; j < k ;j++){
            cin >> input;
            temp.push_back(input);
        }
        arr.push_back(temp);
    }
    int i,j;
    for(int a = 0; a < q; a++){
        // for each pair of values, do
        cin >> i >> j;
        cout << arr[i].at(j) << endl;        
    }
    return 0;
}