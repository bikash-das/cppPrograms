#include <iostream>
#include <memory>
#include <iomanip>

int main(){
  //c++11
   std::unique_ptr<double> pdata {new double{100.0}};
   //c++14
   std::unique_ptr<double> pdata2 {std::make_unique<double>(200.0)};
   std::cout << std::setw(10) <<  "pdata1:" <<  std::setw(10) << *pdata << std::endl;
   std::cout << std::setw(10) << "pdata2:" << std::setw(10) <<  *pdata2 << std::endl;

   //can use auto
   auto pdata3 {std::make_unique<double>(300.0)};
   std::cout << std::setw(10) << "pdata3:" << std::setw(10) <<  *pdata3 << std::endl;

   *pdata3 = 30000;
   std::cout << std::setw(10) << "pdata3:" << std::setw(10) <<  *pdata3 << std::endl;

   //printing the address, every smart pointers has get() method that return the address
   std::cout << "Address of pdata3: "  << std::hex << std::showbase << pdata3.get() << std::endl;

   //reset the pointer
   pdata3.reset();  //contains null pointer
   if(pdata3 == nullptr){
     std::cout << "It contains nullptr\n";
   }
   //you can check like this
   if(!pdata3){
     std::cout << "pdata3 when reset contains 0 as nullptr\n";


    //you can convert a smart pointer to raw pointer using release() method
    double *raw_pointer = pdata2.release();

    delete raw_pointer; //now it's my responsiblity to free up the free store 
   }


}
