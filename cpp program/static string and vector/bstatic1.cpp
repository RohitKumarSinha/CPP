#include <iostream>

class item
{
  static int count;
  int num = 0;

public:

  void get_data(int n)
  {
    num = n;
    count++;
  }

  void display()
  {
    std::cout << "your number is " <<num <<" and count is "<< count<< '\n';
  }
};

int item :: count;

int main()
{
  item i1, i2, i3;

  i1.display();
  i2.display();
  i3.display();

  i1.get_data(1000);
  i2.get_data(2000);
  i3.get_data(3000);

  i1.display();
  i2.display();
  i3.display();

}
