// A c++ program to demonstrate working of sort(), reverse()

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> // for accumulate operation

using namespace std;

int main()
{
  // initializing vector with array values
  int  arr[] = {10, 20, 5, 23, 42, 15};

  int n = sizeof(arr) / sizeof(arr[0]);

  vector<int> vect(arr, arr+n); // arr+n give the size of the array

  cout << "vector is :";

  for (int i = 0; i < n; i++)
       cout << vect[i] << " ";

  // sorting the vector in ascending order
  sort(vect.begin(), vect.end());

  cout << "\nvector after sorting is :";

  for (int i = 0; i < n; i++)
       cout << vect[i] << " ";

  // reverse the vector
  reverse(vect.begin(), vect.end());

  cout << "\nvector after reversing is: ";

  for (int i = 0; i < 6; i++)
       cout << vect[i] << "  ";

  // maximum element of an array

  cout << "\nMaximum element of vector is: ";
  cout << *max_element(vect.begin(), vect.end());

  cout <<"\nMinimum element of vector is :";
  cout << *min_element(vect.begin(), vect.end());

  // starting the summation from 0
  cout << "\nthe summation of vector element is: ";
  cout << accumulate(vect.begin(), vect.end(), 0);

  return 0;
}
