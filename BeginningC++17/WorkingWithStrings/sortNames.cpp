#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <vector>
int getmaxsize(const std::vector<std::string>& names){
  int maxsize = 0;
  for(auto& name: names){
    if(maxsize < name.length())
      maxsize = name.length();
  }
  return maxsize;
}
void printNames(std::vector<std::string>& names){
  int maxsize = getmaxsize(names);
  int count {};
  for(auto& name: names){
    std::cout << std::setw(maxsize + 2) << name;
    if(!(++count % 5))
      std::cout << "\n";
  }
}
void sort(std::vector<std::string>& names){
  //bubble sort
  bool sorted{};
  do{
    sorted = true;
    for(size_t i {1}; i < names.size(); i++){
      if(names[i-1] > names[i]){
        names[i].swap(names[i-1]);
        sorted = false;
      }
    }
  }while (!sorted);
}
int main(){
  std::vector<std::string> names;
  std::string name;
  char confirmation;
  do{
    std::cout << "Enter a name: ";
    std::cin >> name;
    names.push_back(name);
    std::cout << "Do you want to add another (Y or N): ";
    std::cin >> confirmation;
  }while (std::tolower(confirmation) == 'y');

  sort(names);
  printNames(names);
  std::cout << std::endl;

}
