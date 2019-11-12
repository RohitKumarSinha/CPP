// c++ program to demonstrate the static function inside a class

#include <iostream>
class gfg
{
public:
    static void printmsg()
    {
      std::cout << "i am calling static function" << '\n';
    }
};

int main()
{
  gfg::printmsg();

  return 0;
}
