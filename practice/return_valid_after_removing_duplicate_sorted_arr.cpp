#include <iostream>
#include <vector>
using namespace std;
void display(const vector<int>& arr){
	for(auto& v : arr){
		cout << v << " ";
	}
	cout << "\n";
}
//returns no of valid entries after deletion
int deleteDuplicates(vector<int>& arr){
	display(arr);
	if(arr.empty()){
		return 0;
	}
	int write_index = 1;
	for(int i = 1; i < arr.size(); i++){
		cout << "check arr["<< write_index-1 << "] != arr["<<i <<"]\n";
		if(arr[write_index - 1] != arr[i]){
			cout << "check true\n";
			arr[write_index++] = arr[i];
		} else{
			cout << "check false\n";
		}

	}
	display(arr);
	return write_index;

}
int main(){
	vector<int> arr {2,3,4,4,7,11,11,11,13};
	cout << deleteDuplicates(arr) << "\n";
}
