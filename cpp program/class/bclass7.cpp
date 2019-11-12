#include <iostream>
#include <stdlib.h>

class shopping
{
  char items[50][20];
  int price[50];
  int count = 0;

public:
  void get_items(void);
  void display_items(void);
  void sum(void);
  void remove_price(void);
};

 void shopping:: get_items()
{
  int i;
  std::cout << "\n\nenter how many items you want to add not more than 50 :-" << '\n';
  std::cin >> count;

  if (count > 0 && count <= 50)
  {
    std::cout << "\n\nenter the item name and price :- " << '\n';
  for (i = 0; i < count; i++)
  {
  std::cin >> items[i];
  std::cin >> price[i];
  }
 }

 else
    std::cout << "\n\nwrong input please choose a number 0 to 50" << '\n';
}

void shopping :: display_items()
{
  int i;

  for (i = 0; i < count; i++)
       std::cout << items[i] <<"       "<< price[i] << '\n';

    std::cout << "\n" << '\n';
}

void shopping :: sum()
{
  int total = 0, i;

  for (i = 0; i < count; i++)
     total = total + price[i];

    std::cout << "\n\ntotal sum of your price is :- " << total << '\n';
}

void shopping :: remove_price()
{
  int i, j;

  std::cout << "\n\nin which position you want to remove the price of that item :-" << '\n';
  std::cin >> j;

  j = j - 1;

  for (i = 0; i < count; i++)
      if (i == j)
         price[i] = 0;
}
int main()
{
  int choice;

  shopping s1;

  while(1)
  {

       std::cout << "press 1 for input the data" << '\n';
       std::cout << "press 2 for display the data" << '\n';
       std::cout << "press 3 for sum the total price of list" << '\n';
       std::cout << "press 4 for removing a price in list" << '\n';
       std::cout << "press 5 for exit the function" << '\n';

       std::cin >> choice;

  switch(choice)
  {
    case 1:
       s1.get_items();
        break;

    case 2:
        s1.display_items();
        break;

    case 3:
        s1.sum();
        break;

    case 4:
       s1.remove_price();
       break;

    case 5:
         exit(0);

    default:
        std::cout << "invalid input" << '\n';

  }
}
  return 0;
}
