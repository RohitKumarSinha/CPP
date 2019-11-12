// define a class to represent a bank account. include the following members .
// Data members
// (a) name of the depositor
// (b) account number;
// (c) type of account
// (d) balance amount in the account

#include <iostream>
#include <stdlib.h>
class bank
{
  char acc_name[25];
   int acc_no = 123;
  char acc_type[10] = {"saving"};
  float bal_of_amount;

public:

  void profile()
   {
     std::cout << "enter your account name :- " << '\n';
     std::cin >> acc_name;
   }

  void display()
  {
    std::cout <<"account holder name :- " << acc_name << '\n';
    std::cout << "balance of your account :- " << bal_of_amount << '\n';
  }

  void withdrawl()
  {
    int amount;
    if (bal_of_amount > 1000)
    {
    std::cout << "enter the how amount you want to withdrawl :-" << '\n';
    std::cin >> amount;

    if (bal_of_amount - amount > 1000)
        bal_of_amount -= amount;

     else
         std::cout << "you can't withdrawl that amount of money in your account" << '\n';
    }

    else
       std::cout << "you can't withdrawl the money :-" << '\n';
  }

   void deposit()
  {
    int amount;
    std::cout << "enter the amount to deposit :- " << '\n';
    std::cin >> amount;
    bal_of_amount += amount;
  }

  void inital()
  {
    bal_of_amount = 1000;
    std::cout << "your intital value of your account balance is :- " << bal_of_amount << '\n';
  }
};

int main()
{
  int choice;
  bank b1;

  b1.profile();
  b1.inital();

  while (1)
  {
    std::cout << "\n\n";
    std::cout << "press 1 for deposit the money :- " << '\n';
    std::cout << "press 2 for withdrawl the money :- " << '\n';
    std::cout << "press 3 for display the account holder name and balance of your account :- " << '\n';
    std::cout << "press 4 for doing nothing and terminate the program " << '\n';
    std::cin >> choice;

    if (choice == 1)
        b1.deposit();

    if (choice == 2)
        b1.withdrawl();

    if (choice == 3)
        b1.display();

    if (choice == 4)
        exit(0);
  }

  return 0;
}
