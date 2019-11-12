#include <iostream>

class number
{
  int a, b;

public:

  number(int x, int y)
  {
    a = x;
    b = y;
  }

  void display()
  {
    std::cout << "your number is :  " << a << " " << b << '\n';
  }
};

int main()
{
  number a(5, 6);

  a.display();

  return 0;
}
