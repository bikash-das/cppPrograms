#ifndef NAME_H
#define NAME_H

#include <string>
using namespace std;
class Name{
    private:
        string first {};
        string second {};
    public:
        Name(const string& name1, const string& name2) : first(name1),second(name2){}
        Name() = default;
        //getters
        string get_first() const {
            return first;
        }
        string get_second() const {
            return second;
        }
        friend istream& operator>>(istream& in, Name& name);
        friend ostream& operator<<(ostream& out, const Name& name);
};
// stream input for Name objects
inline istream& operator>>(istream& in, Name& name){
    return in >> name.first >> name.second;
}
// stream output for Name objects
inline ostream& operator<<(ostream& out,  const Name& name){
    return out << name.first << " " << name.second;
}
#endif
