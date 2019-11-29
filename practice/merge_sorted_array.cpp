#include <iostream>
#include <vector>
#include <queue>
using namespace std;
sttruct myCustomIterator{
	bool operator > (const myCustomIterator& that) const {
		return *current > *that.current;
	}
	vector<int>::const_iterator current;
	vector<int>::const_iterator end;
}
vector<int> MergeSortedArrays(const vector<vector<int>>& sorted_arrays){
	priority_queue<myCustomIterator, vector<myCustomIterator>, greater<>> min_heap;
	
	for(const vector<int>& sorted_array : sorted_arrays){
		if(!sorted_array.empty()){
			min_heap.emplace(myCustomIterator{sorted_array.cbegin(), sorted_array.cend()});
		}
	}
}

int main(){
	vector<vector<int>> vec;
	vec[0].push_back(3);
	vec[0].push_back(5);
	vec[0].push_back(7);
	vec[1].push_back(0);
	vec[1].push_back(6);
	vec[2].push_back(0);
	vec[2].push_back(6);
	vec[2].push_back(28);
	cout << "No error\n";
}
		
