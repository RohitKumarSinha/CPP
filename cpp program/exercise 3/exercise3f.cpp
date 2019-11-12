#include <iostream>
using namespace std;

int main()
{
  char name[20];
  int units, price, rest;
  float additional;

  cout << "enter the name of the customer :- ";
  cin >> name;

  cout << "enter the units of electicity :- ";
  cin  >> units;

  if (units > 100)
  {
    price = 100 * 60;
    rest = units - 100;

    if (rest <= 200)
    {
       price += (rest * 80);
       rest = 0;
    }

    else
    {
       price += (200 * 80);
       rest = rest - 200;
    }

    if (rest > 0)
    {
      price += rest * 90;
    }
  }

  else
  {
    price = 5000;
  }

  if (price > 300)
  {
      additional = (price * 15) / 100;
      price += additional;a

  }

  cout <<"name = " << name << endl;
  cout << "price = " << price / 100;

  return 0;
}
