#include <iostream>

class complex
{
  int a, b;

public:

  complex()
  {
    std::cout << "\n\nobject not is made" << '\n';
  }

  void get_data(int x, int y)
  {
    a = x;
    b = y;
  }

  void show_data()
  {
    std::cout << "your number is :- " << a <<"  "<< b << '\n';
  }

  friend complex temp(complex, complex);
};

complex temp(complex t1, complex t2)
{
  complex t3;

  t3.a = t1.a + t2.a;
  t3.b = t1.b + t2.b;

  return (t3);
}

int main()
{
  complex c1, c2, c3;
  c1.get_data(4, 5);
  c2.get_data(5, 6);

  c3 = temp(c1, c2);
  c3.show_data();

  return 0;
}
