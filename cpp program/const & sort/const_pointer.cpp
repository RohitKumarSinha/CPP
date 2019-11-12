#include <iostream>
using namespace std;

int main()
{
  int const * pointer = 4;
  pointer = 41;

  cout << "pointer is :" << pointer;

  return 0;
}
