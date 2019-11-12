// write a program to read two numbers from the keyboard and display the larger value on the screen

#include <iostream>
using namespace std;

class largest_value
{
private:

  int first_num;
  int second_num;

public:

   largest_value(int num_one, int num_two)
   {
     first_num = num_one;
     second_num = num_two;
   }

   void comprision(void);
};

void largest_value :: comprision()
{
  if (first_num > second_num)
      cout << first_num << " is the larger value ." << endl;

  else
     cout << second_num << " is the larger value ." << endl;
}

int main()
{
   int num_one, num_two;

   cout << "enter the integer two numbers respectively : " << endl;
   cin >> num_one >> num_two;

   largest_value l1(num_one, num_two);
   l1.comprision();

   return 0;
}
