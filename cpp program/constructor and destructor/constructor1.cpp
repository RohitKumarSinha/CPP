//  default constructor in c++ program
#include <iostream>
class construct
{

public:

  int x, y;

  construct()
  {
    x = 10;
    y = 20;
  }
};

int main()
{
  construct a;
  std::cout << "value of a and b are" << a.x <<"  "<< a.y << '\n';
  return 0;
}
