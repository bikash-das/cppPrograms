#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <forward_list>
using namespace std;

int main(){
    // const vector<int> v {1,5,3,6,2,7};  // for const vector, sort function fails
                  // because the elements must be swappable for sort()
    vector<int> v {1,5,3,6,2,7};
    sort(v.begin(),v.end());
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
    cout << "\n";

    // testing list for sort
    forward_list<int> l {30,10,60,34,12};
    l.sort(); //this sorts in ascending order, how to make it decending?
    copy(l.begin(),l.end(),ostream_iterator<int>(cout," "));
    cout<<"\n";

    //we can sort the vector in decending order by applying greater<>
    sort(v.begin(),v.end(),greater<int>());
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));



}

/*
    Sort:
    i.      object's value must be swapable
    ii.     object must have a move constructor and a move assignment operator
    iii.    sort can be applied to containers which has fwit such as array,
            vector or deque and c array. Ofcourse you can implement your own
    iv.     list and forward_list has sort implemention sepeartely. Since list allows
            bidirectional iter and forward_list allows forward iters
            to use we write mylist.sort();
        

*/