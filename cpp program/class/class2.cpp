// program of adding two complex numbers
// we made three instance function
// first function takes the numbers
// second function display the numbers
// third function add the complex it means it add real and imaginary number one by one
#include <iostream>

class complex
{
private:

  int x, y;

public:

  void set_data()
  {
    std::cout << "enter two numbers :- " << '\n';
    std::cin >> x >> y;
  }

  void show_num()
  {
    std::cout << "your number is :- " << x << "  "<< y << '\n';
  }

  complex add(complex c)
  {
     complex temp;
     temp.x = x + c.x;
     temp.y = y + c.y;

     return(temp);
  }
};

int main()
{
  complex n1, n2, n3;

  n1.set_data();
  n2.set_data();

  n3 = n1.add(n2); // here n1 call add function and pass an argument n2 and store in it n3

  n3.show_num();

  return 0;
}
