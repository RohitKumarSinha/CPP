// post increment and pre increment overloaading functions

#include <iostream>

class increment
{
  int num;

public:

  void get_data(int n)
  {
     num = n;
  }

  void display()
  {
    std::cout << "your number is :-" << num << '\n';
  }

  increment operator ++()
  {
    increment pre;
    pre.num = ++num;

      return (pre);
  }

  increment operator ++(int)
  {
    increment post;
    post.num = num++;

    return (post);
  }
};

int main()
{
  increment a, b;

  a.get_data(4);

  b = ++a;

  a.display();
  b.display();

}
