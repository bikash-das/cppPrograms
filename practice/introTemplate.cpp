#include <iostream>

//works only for integer
int cube(int x){
  return x*x*x;
}

//will make it work all types keeping only one copy
//function template
template <typename T>
T cube(T x){
  return x*x*x;
}

//class template, will work for any data type
template<typename T>
class myVec{
  T arr[100];
  int size;
public:
  myVec():size(0){}
  void push(T x){
    arr[size++] = x;
  }
  void print() const{
    for(int i {}; i < size; i++){
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }
  T get(int i) const {
    return arr[i];
  }
  int getSize() const{
    return size;
  }


};
/*
  func template can infer the data type, like cube(5) = cube<int>(5)
  for class template, you have to tell the compiler everytime
*/
//perform element wise multiplication of two vectors
template<typename T>
myVec<T> operator*(const myVec<T>& lhs, const myVec<T>& rhs){
  myVec<T> res;
  for(int i = 0; i < rhs.getSize(); i++)
    res.push(lhs.get(i) * rhs.get(i));
  return res;
}

int main(){  //code bloat issue,
  std::cout << cube(5) << std::endl;
  std::cout << cube<double>(1.25) << std::endl;
  std::cout << cube(1.25) << std::endl;

  myVec<int> vec1;
  vec1.push(10); vec1.push(20); vec1.push(30); vec1.push(40); vec1.push(50);
  myVec<int> vec2;
  vec2.push(10); vec2.push(20); vec2.push(30); vec2.push(40); vec2.push(50); vec2.push(60);

  myVec<int> result;
  if(vec1.getSize() == vec2.getSize()) {
    result = vec1 * vec2;
    result.print();
  }else{
    std::cout << "Can't do element wise multiplication!\nResaon: Size of two input vectors differ\n";
  }
}
