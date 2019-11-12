// make a structure of student
// inside structure we made two function input and display
// these two function are the member of structure student
// so we can access them with name
// and write void in function prototype
#include <iostream>

struct student
{
private: // here private say that we cann't access these variable outside the structure
  char name[20];
  int rollno;
  float mark1, mark2, mark3, mark4, mark5;
  float avg;

public: // here public say thet we can access these variable outside the structure
  void input()
  {
    std::cout << "enter name roll no marks of five subject of the student" << '\n';
    std::cin >>name >>rollno >>mark1>>mark2 >>mark3 >>mark4 >>mark5 ;

    avg = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;

  }
  void display()
  {
    std::cout <<"name :- " <<name << '\n';
    std::cout << "rollno :- " <<rollno << '\n';
    std::cout << "marks1 :- " <<mark1<< "   mark2 :- "<<mark2<< "   mark3 :- "<<mark3<< "   mark4 :-" <<mark4<< "  mark5 :- "<<mark5<<'\n';
    std::cout << "average of your marks is :- " <<avg<< '\n';
  }
};


int main()
{
  // here we access the member of structure
  // so we use (.) dot operator to access the function inside the structure
  student s;
  s.input(); // so this is fine because this is public structure
  s.display(); // this is also fine because this is public struct

  // s.rollno = 34; this is wrong this gives you compilation error because this is private structure

  return 0;
}
