/*
    qs1.Array
    Suppose we have an array a1,a2,...an,b1,b2,...,bn. Implement an
    algorithm to change this array to a1,b1,a2,b2,..,an,bn
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print(vector<int>& arr){
    for(auto& val : arr)
        cout << val << " ";
    cout << endl;
}
void change(vector<int>& arr){
   int i = 0;
   int j = 1;
   int n = arr.size()/2;
   for(i=0,j=1; i < n;j+=2){
       rotate(arr.begin()+j,arr.begin()+j+1,arr.begin()+n-i);
       print(arr);
       i++;
   }
   print(arr);
}

int main(){
    // int n;
    // cin >> n;
    // vector<int> arr;    
    // int input;
    // for(int i = 0; i < 2*n; i++){
    //     cin >> input;
    //     arr.push_back(input);
    // }
    // arr = change(arr);
    // print(arr);
    // vector<int> vec2(arr.size());
    // reverse_copy(arr.begin(),arr.end(),vec2.begin());
    // print(arr);
    // print(vec2);
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    change(arr);
    // print(arr);
    // rotate(arr.begin()+2,arr.begin()+2,arr.begin()+5);
    // print(arr);
}