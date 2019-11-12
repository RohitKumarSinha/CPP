#include <iostream>

class DM
{
public:

  DM()
  {
    std::cout << "\n\nobject is made in DM class" << '\n';
  }

  int meters, centi;

  void get_data(int a, int b)
  {
    meters = a;
    centi = b;
  }

  friend void calculate(DM);
};

class DB
{
public:

  DB()
  {
    std::cout << "\n\nobjects is made in DB class" << '\n';
  }
  int feet, inches;

  void get_data(int x, int y)
  {
    feet = x;
    inches = y;

  }

  friend void calculate(DB);
};

void calculate(DM d1 , DB d2)
{
  float a, b;

  a = d1.meters * 3.3;
  b = d1.centi * 0.4;

  d2.feet += a;
  d2.inches += b;

  std::cout << "both numbers are converted into feet and inches and add them" << '\n';
  std::cout << "in feet your number is :-" << d2.feet << '\n';
  std::cout << "in inches your number is :-" << d2.inches<< '\n';

}

int main()
{
  DM d1;
  DB d2;

  d1.get_data(100, 500);
  d2.get_data(10, 50);

  calculate(d1, d2);

  return 0;
}
