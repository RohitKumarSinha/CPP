// c++ program to demonstrate the use of static  variable in a function
#include <iostream>

void fun()
{
  static int i;

  std::cout << i << '\n';

  i++;
}

int main()
{
  int j;

  for (j = 0; j < 5; j++)
      fun();

  return 0;
}
