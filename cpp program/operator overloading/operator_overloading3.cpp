#include <iostream>

class complex
{
  float x, y;

public:

  void get_data(float a, float b)
  {
    x = a;
    y = b;
  }

  complex operator +(complex num)
  {
    complex sum;

    sum.x = x + num.x;
    sum.y = y + num.y;

    return (sum);
  }

  void display()
  {
    std::cout << "your number is " << x << "i  and "<< y <<"j\n";
  }
};

int main()
{
  complex c1, c2, c3;
  c1.get_data(4.5, 5.5);
  c1.display();

  c2.get_data(5.5, 6.6);
  c2.display();

  c3 = c1 + c2;
  c3.display();
}
