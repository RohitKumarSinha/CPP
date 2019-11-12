// a c++ program to find the largest of three number using macro

#include <iostream>
using namespace std;

// macro LARGEST to fnd three number and print out using cout
#define LARGEST cout << (x > y ? (x > z ? x : z) : (y > z ? y : z));

int main()
{
  int x, y, z;

  cout << "enter three numbers :- " << endl;
  cin >> x >> y >> z;

  LARGEST(x, y, z); // passing the value in macro LARGEST

  return 0;
}
