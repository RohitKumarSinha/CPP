// c++ program to demonstrate working of erase()

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  // initializing vector with array values
  int arr[] = {5, 10, 15, 20, 20, 23, 23,  42, 45};
  int n = (sizeof(arr) / sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

  cout <<"vector is :  ";
  for (int i = 0; i < n; i++)
      cout << vect[i] << " ";

   // delete second element of vector
    vect.erase(vect.begin()+1);

    cout << "\nvector after erasing the element : ";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";

  // sorting to enable use of unique
    sort(vect.begin(), vect.end());

  cout << "\nvector before removing of duplicates occurance ";

  for(int i = 0; i < n; i++)
       cout << vect[i] << " ";

  // deletes the duplicates occurance
  vect.erase(unique(vect.begin(), vect.end()), vect.end());

  cout << "\nvector after deleting duplicates: ";
  for (int i = 0; i < vect.size(); i++)
      cout << vect[i] << " ";

  return 0;
}
