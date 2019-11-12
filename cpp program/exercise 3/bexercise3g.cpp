#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float res, e;
  cout << "enter the value of e :- ";
  cin >> e;

  for (float i = 0.0; i < 1.0; i += 0.1)
  {
    res = pow(e, -i);
    cout << res << endl;
  }

  return 0;
}
