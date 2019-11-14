#include <iostream>
class parity{
	private:
		int count;
	public:
		parity();
		void put();
		bool test();
};
parity::parity(){
	count = 0;
}
inline void parity::put(){
	count++;
	std::cout<<test()<<"\n";
}
inline bool parity::test(){
	if(count%2 == 0){
		return true;
	}
	return false;
}


int main(){
	class parity p;
	p.put();
	p.put();	
}
