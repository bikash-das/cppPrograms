#include <iostream>
using namespace std;
int main(){
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	switch(ch){
		case '\0':
			//code
			cout << "Null\n";
		break;
		case '0' ... '9':
		 	//code
			cout << "Between 0 and 9\n";
		break;
		case 'a' ... 'z':
			cout << "Between a to z\n";
		break;
		default:
			cout << "Default\n";
		}
}
