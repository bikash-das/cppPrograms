/*
    Exercise 7-1. Write a program that reads and stores the first names of any number of
    students, along with their grades. Calculate and output the average grade and output
    the names and grades of all the students in a table with the name and grade for three
    students on each line.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <numeric>

int getmaxsize(std::vector<std::string>& names){
  int len = names.size();
  for(auto name: names){
    if(len < name.length())
      len = name.length();
  }
  return len;
}

void print(std::vector<std::string>& names, std::vector<int>& grades){
  int count = 0;
  int maxsize = getmaxsize(names);
  auto name = names.begin();
  auto grade = grades.begin();
  while(name != names.end()){
    std::cout << std::setw(3) << " " << std::setw(maxsize) << std::left << *name << std::setw(5) << std::right << *grade;
    if(!(++count % 3)){
      std::cout << "\n";
    }
    ++name;
    ++grade;
    std::cout.clear();
  }
  std::cout << "\n";
}
int main(){
  std::vector<std::string> names {};
  std::vector<int> grades {10,30,50,80};
  char confirmation;
  std::string input;
  int grade;
  names.push_back("Bikash");names.push_back("Ankitha");names.push_back("Swadhin"); names.push_back("MRitunjaSuor");

  // do{
  //   std::cout << "Enter first name: ";
  //   std::cin >> input;
  //   names.push_back(input);
  //   std::cout << "Enter grades: ";
  //   std::cin >> grade;
  //   grades.push_back(grade);
  //   std::cout << "Do you want to add another (y or n): ";
  //   std::cin >> confirmation;
  // }while(std::tolower(confirmation) == 'y');

  double avg = std::accumulate(grades.begin(), grades.end(), 0.0) / grades.size();
  std::cout << "Average Grade: " << avg << std::endl;
  print(names, grades);

}
