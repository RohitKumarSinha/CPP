#include <iostream>

class FLOAT
{
  float f1, f2;
public:

  void get_data(float a, float b)
  {
    f1 = a;
    f2 = b;
  }

  void show_data()
  {
    std::cout << "your number is :- " << f1 <<"  "<<f2 <<'\n';
  }

  FLOAT operator +(FLOAT num)
  {
    FLOAT sum;
    sum.f1 = f1 + num.f1;
    sum.f2 = f2 + num.f2;

    return (sum);
  }

  FLOAT operator -(FLOAT nu)
  {
    FLOAT diff;

    diff.f1 = f1 - nu.f1;
    diff.f2 = f2 - nu.f2;

    return (diff);
  }

  FLOAT operator *(FLOAT num)
  {
    FLOAT multiple;

    multiple.f1 = (f1 * num.f1);
    multiple.f2 = (f2 * num.f2);

    return (multiple);
  }

  FLOAT operator /(FLOAT num)
  {
    FLOAT div;

    div.f1 = (f1 / num.f1);
    div.f2 = (f2 / num.f2);

    return (div);
  }


};

int main()
{
  FLOAT f1, f2, f3;

  f1.get_data(5.0, 6.0);
  f2.get_data(3.0, 4.0);

  std::cout << "adding of corresponding two number : " << '\n';
  f3 = f1 + f2;
  f3.show_data();

  std::cout << "\nsubtracting of corresponding two number :" << '\n';
  f3 = f1 - f2;
  f3.show_data();

  std::cout << "\nmultiplication of corresponding two number :" << '\n';
  f3 = f1 * f2;
  f3.show_data();

  std::cout << "\ndivision of corresponding two number :" << '\n';
  f3 = f1 / f2;
  f3.show_data();

  return 0;
}
