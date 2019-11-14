#include <string>
/* polymorphism : using override keyword */
// 9
class dog{
  virtual void A(int);
  virtual void B() const;
  void C();
};

// another class which inherits dog

class yolo: public dog{
  virtual void A(int) override; // with override we are forcing it to implement inherited class func or throws error
  // virtual void B(); // creates own function
  virtual void B() const override;
  void C();
};


/* 10 final (for virtual func and for class) */
class cat final{
  // since it's declared final, it cannot be inherited
};
class bird{
  virtual void fly() final; //since it's declared final, it cannot be overridden
};

/* 11 Compiler generates default constructor for you */
class dog1{
  dog1(int age){}   //we created constructor, no deafult constructor is provided
};
// dog1 d1;  // result into error becoz compiler won't generate default consructor

class dog2{
  int v;
public:
  dog2(int age){v = age;}
  dog2() = default; // this forces compiler to generate default constructor
};

/* 12. keyword delete */
// dog2 a(2);
// dog2 b(3.0); //3.0 converted to int, what if we don't want that
// a = b;    //b's values inserted into a. we can avoid this is c++11

//c++11
class dog3{
  int v;
public:
  dog3(int age){v = age;}
  dog3(double) = delete; //if value is double, don't allow
  dog& operator=(const dog&) = delete;
};
constexpr int square(int n){ return n*n;}

/* New String Literals */
// char* a = u8"string";  // UTF-8 String
// char16_t* b = u'string';  //UTF-16 String
// char32_t* c = U'string';  //UTF-32 string
// char* d = R"string";    //raw string
int main(){
  dog2 value(20);
  dog3 test(20);
  // dog3 test2(3.0);   //failed to compile
  dog3 test2(3);  //works
  int y = square(10920);
  return 0;
}
