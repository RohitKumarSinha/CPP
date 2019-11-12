// write a program to display the following output using a single cout statement
// maths = 90
// physics = 77
// chemistry = 69

#include <iostream>
using namespace std;

class subject
{
public:

  subject (int marks1, int marks2, int marks3)
  {
    cout << "maths = " << marks1 << endl << "physics = " << marks2 << endl << "chemistry = " << marks3 << endl;
  }

};

int main()
{

  subject(90, 77, 69);

  return 0;
}
