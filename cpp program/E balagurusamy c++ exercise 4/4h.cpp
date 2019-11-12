// a c++ program to a function power() to raise a number m to a power n
// and overloading the function power()

#include <iostream>
#include <cmath>
using namespace std;


void power(double m, int n = 2)
{
  double res;
  res = pow(m, n);
  cout << "\nyour result is : " << res;
}

void power(int m, int n = 2)
{
  int res;
  res = pow(m, n);
  cout << "\nyour result is :" << res;
}

int main()
{
  double m;
  int n;

  cout << "enter a real number :- ";
  cin >> m;

  cout << "enter a integer value to raise power :- ";
  cin >> n;

  power(m, n);
  power(5, n);

  return 0;
}
