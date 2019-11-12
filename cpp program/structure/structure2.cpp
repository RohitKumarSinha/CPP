// a c++ program made with the help of  function and structure
// here we made a structure of student
// we made two function input and display
// we take input from input function and display it on screen with display function

#include <iostream>

struct student
{
  char name[20];
  int rollno;
  float marks1, marks2, marks3, marks4, marks5;
  float avg;
};

student input();
void display(student);

int main()
{
  student s;
  s = input();
  display(s);

  return 0;
}

student input()
{
  student s1;
  std::cout << "enter the name of the student his or her rollno and subject of five marks he or she obtained ." << '\n';
  std::cin >> s1.name >> s1.rollno >> s1.marks1 >> s1.marks2 >> s1.marks3 >> s1.marks4 >> s1.marks5;

  s1.avg = (s1.marks1 + s1.marks2 + s1.marks3 + s1.marks4 + s1.marks5) / 5;
  return (s1);
}

void display(student s2)
{
  std::cout <<s2.name<<"   "<<s2.rollno<<"   "<<s2.marks1<<"   "<<s2.marks2<<"   "<<s2.marks3<<"   "<<s2.marks4<<"   "<<s2.marks5<< '\n';
  std::cout << "average of your marks is" <<s2.avg<< '\n';
}
