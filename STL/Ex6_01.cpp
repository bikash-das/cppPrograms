// Sorting class objects
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Name.h"

int main(){
    vector<Name> names;
    cout << "Enter names as first name followed by second name. Enter Ctrl+D to end\n ";
    copy(istream_iterator<Name>(cin), istream_iterator<Name>(),
                    back_insert_iterator<vector<Name>>(names));
    cout << names.size() << " names read. ";
    cout << "Sorting in ascending sequence...\n";
    sort(begin(names),end(names),[](const Name& name1, const Name& name2){
        return (name1.get_second() == name2.get_second() ? name1.get_first() < name2.get_first() : name1.get_second() < name1.get_second());
    });

    cout << "The names in ascending sequence are:\n";
    copy(begin(names),end(names),ostream_iterator<Name>(cout,"\n"));

}