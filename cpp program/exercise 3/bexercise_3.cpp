#include <iostream>
using namespace std;

int main()
{
  int row, col, n, k = 1;

  cout << "enter a integer number :- ";
  cin >> n;

  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
    {
      if (k >= col)
          cout << k;

      else
          cout << " ";
    }
      k++;
      cout << endl;
  }

  return 0;
}
