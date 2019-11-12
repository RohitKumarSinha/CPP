// here we made a class and make private instance variable x, y
// and we made a public instance function set_num and show_num

#include <iostream>

class num
{
private:

  int x, y;

public:

  void set_num()
  {
    std::cout << "enter two numbers :- " << '\n';
    std::cin >> x >> y;
  }

  void show_num()
  {
    std::cout << "your numbers is :- " << x <<"  "<< y << '\n';
  }
};

int main()
{
  num n;  // made a object n
  n.set_num(); // we access the instance function with the help of set_num
  n.show_num();

  return 0;
}
