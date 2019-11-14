#include <string>
#include <iostream>

struct person{
  std::string name;
  unsigned int age;
private:
  int sal;  //inside struct we can declare private members
public:
  void set_sal(int s){ sal = s;}
  int get_sal() const { return sal;}
};
//by default class members are private
class person_t{
  //this are private by default
  std::string name_;
  unsigned int age_;
public:
  void setName(std::string n){ name_ = n;}
  void setAge(unsigned int a){
    //you have full control, validate and then assign
    if(a>=18){
      age_ = a;
    }
    else
      age_ = 0;
  }
  std::string getName() const{ return name_;}
  unsigned int getAge() const { return age_;}

};
int main(){
  person t;
  t.name = "bikash";
  t.age = 25;
  // t.sal = 24000;  //this will fail because sal is private
  t.set_sal(24000);
  std::cout << t.get_sal() << "\n";
  std::cout << t.name << "\n";
  std::cout << t.age << "\n";
  person_t p;
  p.setName("Barsha");
  p.setAge(10);
  std::cout << p.getName() << "\n";
  std::cout << p.getAge() << "\n";
}
