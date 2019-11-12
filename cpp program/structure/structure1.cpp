// basic c++ program of structure
// here we made a student data type and store some information in it.
// instead of printf we use std::cout and scanf std::cin.

#include <iostream>
struct student
{
  char name[20];
  int rollno;
  float marks1, marks2, marks3, marks4, marks5;
  float avg;
};

int main()
{
  student s1;
  std::cout << "enter the name of the student : " << '\n';
  std::cin >> s1.name;

  std::cout << "enter the roll no of the student :" << '\n';
  std::cin >> s1.rollno;

  std::cout << "enter the marks of five subject of the student :" << '\n';
  std::cin >> s1.marks1 >> s1.marks2 >> s1.marks3 >> s1.marks4 >> s1.marks5;

  s1.avg = (s1.marks1 + s1.marks2 + s1.marks3 + s1.marks4 + s1.marks5) / 5;

  std::cout << "name     rollno  marks1  marks2  marks3  marks4  marks5  average" << '\n';
  std::cout <<s1.name<<"     "<<s1.rollno<<"      "<<s1.marks1<<"      "<<s1.marks2<<"      "<<s1.marks3<<"      "<<s1.marks4<<"      "<<s1.marks5<<"      "<<s1.avg<< '\n';

  return 0;
}
