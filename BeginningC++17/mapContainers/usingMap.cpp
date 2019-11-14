// find address for a given name
// objects located based on keys
// there are four variaties of map
/*
    elements are stored as pair<const K, T> 
    i. map<K,T> : K is unique and T object can have duplicates unless it has unique keys
    ii. multimap<K,T>: duplicate keys are allowed here
    iii. unordered_map<K,T>: hash values calculated from keys. Duplicate keys are not allowed.
    iv. unordered_multimap<K,T>: similar to unordered_map but in this duplicate keys are allowed

    to use map and multimap include<map>
    to use unordered_map and unordered_multimap include<unordered_map>

    multi: keys can be duplicate
    unordered indicates it's keys are generated using hash values

    stored: elements are stored as a balanced binary tree
        -the number of levels between the root node and the
         leaf nodes is minimized
        -a tree is said to be balanced if the height of the left sub-tree
         of each node never differs by more than one from the height
         of its right sub-tree

         Retrieval time is O(log2 n)
         
         the key can be of anytype unless is comparable.



*/
#include <iostream>
#include <string>
#include <map>
class Name{
    private:
        std::string firstname{};
        std::string secondname{};
    public:
        Name(std::string first, std::string second) : firstname{first},secondname{second}{};
        Name()=default;
        bool operator<(const Name& name){
            return secondname < name.secondname ||
                    ((secondname == name.secondname) && (firstname < name.firstname));
        }
};
int main(){
    std::map<std::string, size_t> people;
    //using initializer list we can declare a map
    std::map<std::string, size_t> peoples { {"Bikash",26}, {"Rohit",45},
            {"Doly",23} };
    std::map<std::string, size_t> duplicate_peoples {peoples};
    

}


