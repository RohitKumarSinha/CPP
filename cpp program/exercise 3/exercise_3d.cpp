#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float v;

  for (int p = 1000; p <= 10000; p += 1000)
  {
    for (float r = 0.10; r <= 0.20; r += 0.01)
    {
      for (int n = 1; n <= 10;  n++)
      {
          v = pow(p * (1 + r), n);
          cout << "v = " << v << endl;
      }
    }
  }

  return 0;
}
