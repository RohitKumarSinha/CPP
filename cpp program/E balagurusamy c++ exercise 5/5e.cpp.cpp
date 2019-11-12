// create two classes DM and DB which store the value of distance DM stores distances in meters and centimeters
// and DB in feet and inches. write a program that can read values for the class objects and add one object of DM
// with another object of DB

#include <iostream>

class DM
{
public:

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
