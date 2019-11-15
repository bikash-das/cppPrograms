// Sorting class objects
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "Name.h"

int main(){
    // vector<Name> names;
    // cout << "Enter names as first name followed by second name. Enter Ctrl+D to end\n ";
    // copy(istream_iterator<Name>(cin), istream_iterator<Name>(),
    //                 back_insert_iterator<vector<Name>>(names));
    // cout << names.size() << " names read. ";
    // cout << "Sorting in ascending sequence...\n";
    // stable_sort(begin(names),end(names),[](const Name& name1, const Name& name2){
    //     return (name1.get_second() == name2.get_second() ? name1.get_first() < name2.get_first() : name1.get_second() < name1.get_second());
    // });

    // cout << "The names in ascending sequence are:\n";
    // copy(begin(names),end(names),ostream_iterator<Name>(cout,"\n"));
    vector<int> v{1,5,3,2,6,7,2,4,1,6,10,30,40,20,33,42,78};
    auto c = v;
    nth_element(v.begin(), v.begin()+v.size()/2, v.end());
    cout << v[v.size()/2] << "\n";
    sort(c.begin(),c.end());
    cout << c[c.size()/2] << "\n";


}