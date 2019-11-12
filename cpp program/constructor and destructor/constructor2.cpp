// c++ program to illustrate parameterized constrctor
#include <iostream>

class point
{
public:
  int x, y;

  point(int x1, int y1)
  {
    x = x1;
    y = y1;
  }

  int getx1()
  {
    return x;
  }

  int gety1()
  {
    return y;
  }
};

int main()
{
  point p1(10 ,20);
  std::cout << "x =  " <<p1.getx1() << "  y = "<<p1.gety1()<< '\n';

  return 0;
}
