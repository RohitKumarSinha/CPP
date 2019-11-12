// unary operator overloading
// here we overloading - operator

#include <iostream>

class minus
{
  int a, b, c;

public:

  void get_data(int x, int y, int z)
  {
    a = x;
    b = y;
    c = z;
  }

  void operator -()
  {
    a = -a;
    b = -b;
    c = -c;
  }

  void display()
  {
    std::cout << "your number is " <<a <<" "<< b <<" "<< c << '\n';
  }
};

int main()
{

  minus m;

  m.get_data(2, 4, 5);
  m.display();

  -m;
  m.display();

  return 0;
}
