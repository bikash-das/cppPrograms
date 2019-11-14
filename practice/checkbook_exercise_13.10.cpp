#include <iostream>
class checkbook{
	private:
		int total_amt;
	public:
		checkbook();
		void add_item(int amount);
		int total();
};
inline checkbook::checkbook(){
	total_amt = 0;
}
inline void checkbook::add_item(int amount){
	total_amt += amount;
}
inline int checkbook::total(){
	return total_amt;
}
int main(){
	class checkbook mybook;
	mybook.add_item(20);
	mybook.add_item(30);
	mybook.add_item(50);
	std::cout<< mybook.total();
	return 0;
}
