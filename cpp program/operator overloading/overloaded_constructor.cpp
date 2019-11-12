#include <iostream>

class complex
{
  int real, img;

public:

   complex() // constructor with no argument
   { }

   complex(int x) // constructor with one argument
   {
     real = img = x;
   }

   complex(int x, int y)
   {
     real = x;
     img = y;
   }

   friend complex calculate(complex, complex);
   friend void show_data(complex);
};

complex calculate (complex c1, complex c2)
{
  complex add;

  add.real = c1.real + c2.real;
  add.img = c1.img + c2.img;

  return (add);
}

void show_data(complex c3)
{
  std::cout << "your number is " << c3.real <<"i and  "<< c3.img <<"j" << '\n';
}

int main()
{
  complex c1(2, 5);
  complex c2(2);

  complex c3 = calculate(c1 , c2);

  show_data(c1);
  show_data(c2);
  show_data(c3);

  return 0;
}
