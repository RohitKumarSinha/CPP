// a c++ program to demonstrate sort(), reverse()
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

class algorithm
{
  int arr[] = {10, 20, 25, 12, 9};
  int n = (sizeof(arr)/ sizeof(arr[0]));
  vector<int> vect(arr, arr+n);

public:

  void sorting(void);
  void reversing(void);
  void maximum(void);
  void minimum(void);
  void sum(void)
};

void algorithm :: sorting()
{
  // vector before sorting
  cout << "vector before sorting : ";
  for (int i = 0; i < n; i++)
      cout << vect[i] << "  ";

  // vector after sorting
  sort(vect.begin(), vect.end());
  cout << "vector after sorting : ";
  for (int i = 0; i < n; i++)
       cout << vect[i];
}

// for reversing the vector
void algorithm :: reversing()
{
  // vector before reverse
  cout << "vector before reversing : ";
  for (int i = 0; i < n; i++)
       cout << vect[i]  << "  ";

  // vector after reverse
  reverse(vect.begin(), vect.end())
  cout << " vector after reversing : ";
  for (int i = 0; i < n; i++)
       cout << vect[i] << "  ";
}

// to find the maximum value in a vector
void algorithm :: maximum()
{
  cout << "this is your maximum element in array :  ";
  cout << *max_element(vect.begin(), vector.end());
}

// to find the minum value in  a vector
void algorithm :: minimum()
{
  cout << "\nthis is your minimum element in vector :  ";
  cout << *min_element(vect.begin(), vect.end());
}

// sum of the total numbers in a vector
void algorithm :: sum()
{
  cout << "\nsum of the total value in the program :  ";
  cout <<  accumulate(vect.begin(), vect.end(), 0); // here 0 is initial value
}

int main()
{
  int choice;
  algorithm a;

  while(1)
  {
    cout << "press 1 for sorting your vector " << endl;
    cout << "press 2 for reversing your vector " << endl;
    cout << "press 3 for find maximum value in the vector " << endl;
    cout << "press 4 for find minimum value in the vector " << endl;
    cout << "press 4 for sum the total value in the vector " << endl;

    cin >> choice;

    switch(ch)
    {
      case 1:
          a. sorting();
          break;

      case 2:
          a.reversing();
          break;

      case 3:
          a.maximum();
          break;

      case 4:
          a.minimum();
          break;

      case 5:
          a.sum();
          break;

      default;
          cout << "invalid input"

    }
  }
  return 0;
}
