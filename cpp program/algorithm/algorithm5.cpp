#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  // initializing vector with array values
  int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
  int n = (sizeof(arr) / sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

  // sort the array to make sure that lower_bound() and upper_bound work
  sort(vect.begin(), vect.end());

  // returns the first occurance of 20
  auto q = lower_bound(vect.begin(), vect.end(), 20);

  // retuns the last occurance of 20
  auto p = upper_bound(vect.begin(), vect.end(), 45);

  cout << "The lower bound is at position: ";
  cout << q-vect.begin() << endl;

  cout << "The upper bound is at position: ";
  cout << p-vect.begin() << endl;

  return 0;
}
