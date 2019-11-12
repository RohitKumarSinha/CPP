#include <iostream>

class fixed_deposit
{
   int amount;
   int year;
   float rate;
   float value = 0;
   int roi;

public:

   fixed_deposit() // constructor with no argument
   { }

   fixed_deposit(int, int, double);
   fixed_deposit(int, int, int);
   void display();
};

fixed_deposit :: fixed_deposit(int price, int time, int interest)
{
  int i;

  amount = price;
  year = time;
  roi = interest;

  for (i = 1; i <= year; i++)
      value = value + (amount * year * roi);
}

fixed_deposit :: fixed_deposit(int price, int time, double interest)
{
  int i;

  amount = price;
  year = time;
  rate = interest;

  for (i = 1; i <= year; i++)
       value = value + (amount * year * (rate * 100));
}

void fixed_deposit :: display()
{
  std::cout << "amount = " <<amount <<"  year = "<< year <<"rate = " << rate << "  returned value = " << value <<'\n';
}

int main()
{
  fixed_deposit f1(1000, 5, 7);
  fixed_deposit f2(1000, 5, 0.7);

  f1.display();
  f2.display();

  return 0;

}
