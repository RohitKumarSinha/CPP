// c++ program to demonstrate working of count() and find()

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // initializing vector with array values
  int arr[] = {10, 20, 5, 23, 42, 20, 15};
  int n = (sizeof(arr) / sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

  cout << "occurance of 20 in vector : ";

  // counts the occurance of 20 from 1st to last element
  cout << count(vect.begin(), vect.end(), 20);

  // find() returns iterator to last address if element not present
  find(vect.begin(), vect.end(), 5) != vect.end() ? cout << "\nElement found" : cout << "\nElement not found";

  return 0;
}
