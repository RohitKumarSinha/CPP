#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int arr[] = {43, 54, 33, 22, 89, 12, 32, 33};
  int n = (sizeof(arr) / sizeof(n));
  vector<int> vect(arr, arr+n);

  cout << "vector before erasing thing " << endl;
  for (int i = 0; i < n; i++)
      cout << vect[i] << "  ";

  cout << "\nvector after erasing thing " << endl;
  vect.erase(vect.begin()+1);

  for (int i = 0; i < n; i++)
      cout << vect[i] << "  ";

  cout << "\nvector after erasing duplicate thing " << endl;
  vect.erase(unique(vect.begin(), vect.end()), vect.end());

  for (int i = 0; i < vect.size(); i++)
       cout << vect[i] << "  ";

    return 0;
}
