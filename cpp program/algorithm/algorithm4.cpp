// c++ program to demonstrate the working of count() and find()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int arr[] = {23, 45, 65,32, 12, 43, 56, 20};
  int n = (sizeof(arr) / sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

  cout << count(vect.begin(), vect.end(), 100) << endl;

  find(vect.begin(), vect.end(), 100) != vect.end() ? cout << "element not found" : cout << "element found";

  return 0;
}
