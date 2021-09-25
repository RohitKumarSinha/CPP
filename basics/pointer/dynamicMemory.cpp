#include <iostream>

using namespace std;

int main()
{

  int *int_ptr{nullptr};
  int_ptr = new int;       // allocate the int on the heap
  cout << int_ptr << endl; // use it
  delete int_ptr;          // release it

  size_t size{0};
  double *temp_ptr{nullptr};

  cout << "How many temps?";
  cin >> size;

  temp_ptr = new double[size];
  cout << temp_ptr << endl;
  delete[] temp_ptr;

  cout << endl;
  return 0;
}