#include <iostream>

class item
{
  int num;
  float cost;

public :

   void get_data(int, float);

  void display()
  {
    std::cout << "number    :" <<num << '\n';
    std::cout << "cost      :" <<cost << "\n\n";
  }

};

void item :: get_data (int n, float price)
{
  num = n;
  cost = price;
}

int main()
{
  item i1, i2;

  std::cout << "object x" << '\n';
  i1.get_data(100, 299.95);
  i1.display();

  std::cout << "object y" << '\n';
  i2.get_data(200, 175.5);
  i2.display();

  return 0;
}
