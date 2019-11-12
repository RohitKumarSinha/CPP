// uses of inline function
// a c++ program which show the uses of inline function

#include <iostream>

// if we didn't write this line then we have to write std::cout << '\n'; otherwise we simply write cout << '\n';
using namespace std;

// this is a inline function which take three argument of int type and return a void type
inline void largest (int x, int y, int z)
{
  // using of this conditinal operator we find largest of three and print it with the help of cout
  cout << (x > y ? (x > z ? x : z) : (y > z ? y : z));
}

int main()
{
  int x, y, z;

  cout << "enter the three number :- " << endl;
  cin >> x >> y >> z;

  largest(x, y, z);

  return 0;
}
