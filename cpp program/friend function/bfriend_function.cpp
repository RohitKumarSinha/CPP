#include <iostream>

class mean
{
  int a, b;

public:
   void set_data(int, int);

   friend void show_data(mean m3);
   friend void calculate_mean(mean m2);
};

void mean :: set_data(int x, int y)
{
  a = x;
  b = y;
}

void calculate_mean(mean m2)
{
  float res;

  res = (m2.a + m2.b) / 2;
  std::cout << "your result is" << res << '\n';
}

void show_data(mean m3)
{
  std::cout << "your number is " << m3.a <<" "<< m3.b << '\n';
}

int main()
{
  mean m1, m2;
  m1.set_data(4,5);
  show_data(m1);

  calculate_mean(m1);

  return 0;
}
