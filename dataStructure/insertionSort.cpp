#include <iostream>
#include <vector>
using namespace std;
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int returnShifts(vector<int>& vec){
    int k = 0,i,j;
    for(i = 1; i < vec.size(); i++){
        j=i;
        while((j>0) && (vec[j] < vec[j-1])){
            // cout << vec[j] << " " << vec[j-1] << "\n";
            swap(vec[j],vec[j-1]);
            j -= 1;
            k += 1;
        }
    }
    return k;
}
int main(){
    vector<int> vec {1,1,1,2,2};
    cout << returnShifts(vec) << "\n";
    vec = {2,1,3,1,2};
    cout << returnShifts(vec) << "\n";

}
