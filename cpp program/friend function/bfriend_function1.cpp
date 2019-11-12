#include <iostream>

class two;

class one
{
  int data;

public:

  void set_data(int num)
  {
    data = num;
  }

  friend void add(one, two);
};

class two
{
  int value;

public:

  void set_data(int n)
  {
    value = n;
  }
  friend void add(one, two);
};

void add(one obj1, two obj2)
{
  int res;

  res = obj1.data + obj2.value;
  std::cout << "result of adding two class number is " << res << '\n';
}

int main()
{
  one o;
  two t;
  o.set_data(5);
  t.set_data(6);

  add(o, t);

  return 0;
}
