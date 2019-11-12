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

  void display()
  {
    std::cout << "number in class one" << data << '\n';
  }
  friend void exchange(one &, two &);
};

class two
{
  int value;

public:

  void set_data(int n)
  {
    value = n;
  }
  friend void exchange(one &, two &);

  void show()
  {
    std::cout << "number in class two" << value << '\n';
  }
};

void exchange(one &obj1, two &obj2)
{
  int temp;

  temp = obj1.data;
  obj1.data = obj2.value;
  obj2.value = temp;
}

int main()
{
  one o;
  two t;

  o.set_data(4);
  t.set_data(5);

  o.display();
  t.show();

  exchange(o, t);

  o.display();
  t.show();

  return 0;
}
