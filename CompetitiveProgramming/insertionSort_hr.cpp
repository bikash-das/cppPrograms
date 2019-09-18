#include <iostream>
#include <vector>
#include <iterator>
#include <assert.h>
using namespace std;
void insertionSort(vector<int> arr) {
    for(int i =1; i < arr.size();i++){
        int j = i;
        while((j > 0) && arr[j] < arr[j-1]){
            if(arr[j] < arr[j-1]){
               swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    // print the elements
    cout << "Sorted Values: ";
    copy(arr.begin(),arr.end(),ostream_iterator<int>(cout, " "));
}

int main(){
    vector<int> arr;
    cout << "Enter total elements: ";
    int n;
    cin >> n;
    assert(n>0);
    cout << "Enter " << n << " elements\n";
    int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        arr.push_back(input);
    }
    insertionSort(arr);
    cout << "\n";
}