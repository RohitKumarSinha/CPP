#include <iostream>

class complex
{
private:
  int x, y;

public:
  getnum(int a, int b)
  {
    x = a;
    y = b;
  }

  complex operator +(complex c1)
  {
    
  }


};

int main()
{
  complex c1, c2, c3;
  getnum c1(2, 5);
  getnum c2(5, 2);
  c3 = c1 + c2;

  shownum(c3);
}
