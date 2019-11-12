#include <iostream>
#include <vector>
using namespace std;

class array
{

public:
  array()
  {
    int count;

    cout << "enter the n term of element to add natural number : " << endl;
    cin >> count;

    vector<int> arr; // default size
    arr.resize(count); // set resize

     int sum = 0;

    for (int i = 0; i <= count; i++)
    {
      arr[i] = i;
      sum = sum + i;
    }
     cout << "sum of natural number is " << sum << endl;
  }
};

int main()
{
  array a;

  return 0;
}
