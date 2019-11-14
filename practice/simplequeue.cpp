#include <iostream>
#define max 100
class simplequeue{
	private:
		int queue[max];
		int first;
		int last;
	public:
		simplequeue();
		void put(int item);
		int get(); 
		int next();
};
simplequeue::simplequeue(){
	first = last = 0;
}
//doesn't check for overflow first in first out
inline void simplequeue :: put(int item){	
	queue[last] = item;
	last ++;	
}
//doesn't check for underflow
inline int simplequeue :: get(){	
	int temp = queue[first];
	first++;
	return temp;
}
inline int simplequeue :: next(){
	return queue[first];
}

int main(){
	class simplequeue a_simplequeue;
	a_simplequeue.put(1);
	a_simplequeue.put(2);
	a_simplequeue.put(3);
	a_simplequeue.put(4);
	a_simplequeue.put(5);
	std::cout<<a_simplequeue.get()<<"\n";
	std::cout<<a_simplequeue.get()<<"\n";
	std::cout<<"Next: "<<a_simplequeue.next()<<"\n";
	std::cout<<a_simplequeue.get()<<"\n";
	std::cout<<"Next: "<<a_simplequeue.next()<<"\n";
	
}
