#include <iostream>

class numbers
{
  int num;
  static int count;

public:

  void set_data(void)
  {
    num = ++count;
  }

  static void show_count()
  {
    std::cout << "count  :-" << count << '\n';
  }

  void show_data()
  {
    std::cout << "your number is :-" << num << '\n';
  }
};

int numbers :: count;

int main()
{
  numbers n1, n2, n3;

  n1.set_data();
  n2.set_data();

  numbers :: show_count();

  n3.set_data();

  numbers :: show_count();

  n1.show_data();
  n2.show_data();
  n3.show_data();

  return 0;
}
