// A binary indexed tree or fenwick tree implementation
// https://www.youtube.com/watch?v=CWDQJGaN1gY
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class fenwick{
    public:
        fenwick(const vector<int>& arr) : tree(arr.size()+1,0),n(arr.size()+1){
            for(int i = 1; i <= arr.size(); i++){
                updateTree(arr[i-1],i);               
            }  
            print();
        }

        void updateTree(int val, int idx){
            while(idx < n){
                tree[idx] += val;
                idx = getNext(idx);
            }
        }
        int getSum(int index){
            index = index+1;
            int sum = 0;
            //parents index eventually becomes 0
            while(index > 0){
                sum += tree[index];
                index = getParent(index);
            }
            return sum;
        }
        void print(string msg = "Original Fenwick Tree"){
            cout << msg << "\n";
            for(auto& val : tree)
                cout << val << " ";
            cout << "\n";
        }       
    
    private:
        vector<int> tree;
        int n;
        int getNext(int index){
            return index + (index & -index);
        }
        int getParent(int index){
            return index - (index & -index);
        }
        
};
int main(){
    vector<int> v {1,2,3,4,5,6,7};  
    fenwick obj(v);    
    cout << "Sum(0-4) inclusive: " << obj.getSum(4) << "\n";
    obj.updateTree(20,2);  //update v[2] byjv[2] + 20;
    obj.print("After updating v[2] by 20");
    cout << "Sum(0-4) inclusive after updation: " << obj.getSum(4) << "\n";
}