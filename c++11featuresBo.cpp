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
int main(){
  return 0;
}

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
  dog2(int age);
  dog2() = default; // this forces compiler to generate default constructor
};
