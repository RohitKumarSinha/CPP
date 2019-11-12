#include <iostream>
#include <cmath>
using namespace std;

const float pie = 3.14;

int main()
{
  int radius;

  cout << "enter the radius of the circle :- ";
  cin >> radius;

  float area = pie * radius * radius;

  cout << "area of your circle is :- " << area;

  return 0;
}
