// make a structure of student
// inside structure we made two function input and display
// these two function are the member of structure student
// so we can access them with name
// and write void in function prototype
#include <iostream>

struct student
{
  char name[20];
  int rollno;
  float mark1, mark2, mark3, mark4, mark5;
  float avg;

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
  s.input();
  s.display();

  return 0;
}
