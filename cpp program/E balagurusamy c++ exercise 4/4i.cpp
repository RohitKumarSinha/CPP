// a c++ program to compute the area of a triangle and a circle by overloading the area() function

#include <iostream>
#include <cmath>
using namespace std;

void area(float rad)
{
  const float pie = 3.14; // we make pie variable as a constant value it means we doesn't change its value

  cout << "\narea of the circle is  " << 2 * pie * rad;
}

void area(float s1, float s2, float s3)
{
  float s;
  s = ((s1 + s2 + s3) / 2);

  float a;
  a = sqrt(s * ((s - s1) * (s - s2) * (s - s3)));

  cout << "\narea of the triangle is  " << a;
}

int main()
{
  float rad;
  cout << "enter the radius of the circle in real form :- ";
  cin >> rad;

  area(rad);

  float s1, s2, s3;
  cout << "\n\nenter the three sides of the trianngle in real form : " << endl;
  cin >> s1 >> s2 >> s3;

  area(s1, s2, s3);

  return 0;
}
