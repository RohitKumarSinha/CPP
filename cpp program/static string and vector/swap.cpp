#include <iostream>
void swap(int & , int &);

using namespace std;

void swap(int &num1, int &num2)
{
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}

int main()
{
  int num_one, num_two;

  cout << "enter the integer two number ."<<endl;
  cin >> num_one >> num_two;
  cout << "before swapping a = "<< num_one << "  b =  "<< num_two << endl;

  swap(num_one, num_two);

  cout << "after swapping a = " << num_one << "  b = "<< num_two << endl;

  return 0;
}
