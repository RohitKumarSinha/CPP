// c++ program to demonstrate working of distance()
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int arr[] = {5, 10, 15, 20, 20, 50, 42, 45};
  int n = (sizeof(arr) / sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

  // return distance of first to maximum element
  cout << "distance between first to max element:  ";
  cout << distance(vect.begin(),  max_element(vect.begin(), vect.end()));

  return 0;
}
