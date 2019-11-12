// a c++ program to compute power to raise a number m to a power n  
#include <iostream>
#include <cmath> // cmath is standard library to perform mathematical operation like pow, sqrt
using namespace std;

// here is power function which takes two argument first one is normal argument
// and second one is default argument
void power(double m, int n = 2)
{
  double res;
  res = pow(m, n);
  cout << "\nyour result is : " << res;
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

  return 0;
}
