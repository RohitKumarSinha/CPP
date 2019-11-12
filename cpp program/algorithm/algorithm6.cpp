#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int arr[] = {32, 45, 54, 56, 67, 87};
  int n = (sizeof(arr) / sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

  sort(vect.begin(), vect.end());
   auto p = upper_bound(vect.begin(), vect.end(), 45);
   auto q = lower_bound(vect.begin(), vect.end(), 87);

   cout << p-vect.begin() << endl;
   cout << q-vect.begin();

  return 0;
}
