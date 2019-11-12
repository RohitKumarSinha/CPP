#include <iostream>
#include <string.h>

class comprision
{
  char c[20];

  void get_data()
  {
     std::cout << "enter a string :- " << '\n';
     std::cin >> c;
  }

  void operator ==(comprision c1)
  {
    


  }

};

int main()
{
  comprision c1, c2;

  c1.get_data();
  c2.get_data();

  c1 == c2;

  return 0;
}
