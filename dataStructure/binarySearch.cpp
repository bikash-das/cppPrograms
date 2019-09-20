#include <iostream>
#include <vector>
using namespace std;
auto binarySearch(vector<int>& v,int low, int high,int key){
    if(low > high){
        return make_pair(false,-1);
    }
    int mid = (low + high) / 2;
    
    if(key == v[mid]){
        return make_pair(true,mid);
    }
    if(key > v[mid]){
        binarySearch(v,mid+1,high,key);
    }else{
        binarySearch(v,low,mid-1,key);
    }    
}
int main(){
    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    cout << "Enter a no to search: ";
    int key;
    cin >> key;
    auto res = binarySearch(v,0,v.size()-1,key);
    if(res.first == true){
        cout << "Found at index " << res.second << "\n";
    }else{
        cout << key << " Not Found\n";
    }
}