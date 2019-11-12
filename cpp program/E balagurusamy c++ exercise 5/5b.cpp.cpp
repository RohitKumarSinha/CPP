// write a class to represent a vector (a series of float values) include member function to perform
// the following task.
// (a) to create the vector
// (b) to modify the value of a given element
// (c) to multiply by a scalar value
// (d) to display the vector in the form (10, 20, 30, ...)

#include <iostream>
#include <stdlib.h>

class vect
{
  float num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

public:

  void get_data()
   {
     int i;
     std::cout << "\nenter 10 real numbers :" << '\n';

     for (i = 0; i < 10; i++)
         std::cin >> num[i];
   }

   void  modify_data()
   {
     int posi;
     float new_num;

     std::cout << "\nin which position you want to modify data : " << '\n';
     std::cin >> posi;

     std::cout << "enter the new number you want to put on that position : " << '\n';
     std::cin >> new_num;

     num[posi - 1] = new_num;
   }

   void multiply_data()
   {
      int mul, i;

     std::cout << "\nenter in which integer number you want to multiply all real number : " << '\n';
     std::cin >> mul;

     for (i = 0; i < 10; i++)
          num[i] = num[i] * mul;
   }

   void display_data()
   {
     int i;
      std::cout << "\nhere is your numbers :" << '\n';
      std::cout << "( ";

      for (i = 0; i < 10; i++)
          std::cout << num[i] <<" ,";

      std::cout << " )"<<'\n';
   }
};

int main()
{
  int data;
  vect v1;


while (1)
{
  std::cout << "press 1 for input the data" << '\n';
  std::cout << "press 2 for modify_data" << '\n';
  std::cout << "press 3 for multiply data" << '\n';
  std::cout << "press 4 for display_data" << '\n';
  std::cout << "press 5 for exit the program" << '\n';

  std::cin >> data;

if (data == 1)
  v1.get_data();

else if (data == 2)
  v1.modify_data();

else if (data == 3)
  v1.multiply_data();

else if (data == 4)
  v1.display_data();

else if (data == 5)
    exit(0);

else
    std::cout << "invalid input :" << '\n';
}
  return 0;
}
