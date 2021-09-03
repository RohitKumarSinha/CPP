#include <iostream>

using namespace std;

int main()
{

  int subMarks[]{};

  cout << "enter your first subject Marks :- ";
  cin >> subMarks[0];
  cout << "\nenter your second subject Marks :- ";
  cin >> subMarks[1];
  cout << "\nenter your third subject Marks :- ";
  cin >> subMarks[2];

  int total_marks = subMarks[0] + subMarks[1] + subMarks[2];
  cout << "\nyour total marks is " << total_marks;

  float avg_marks = total_marks / 3;
  cout << "\nyour average marks is " << avg_marks;

  return 0;
}