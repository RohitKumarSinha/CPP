#include <iostream>
#include <string.h>
class book
{
  char tittle[20] = {"Let Us C"};
  char author[25] = {"Yashwant Kanetkar"};
  float price = 5;
  int stock = 100;
  int res, res1;

public:

  void get_bookdata()
  {
    char name[10];
    char writer[20];

    std::cout << "enter the book name :-" << '\n';
    gets(name);

    std::cout << "enter the book author name :- " << '\n';
    gets(writer);

    res = strcmp(name, tittle);
    res1 = strcmp(writer, author);

  }

  void get_stockdata()
  {
    int copy;
    if (res || res1)
        std::cout << "\nno such book avilable in stock ." << '\n';

     else
    {
       if (stock > 0)
      {
         std::cout << "\nhow many copy you want that book" << '\n';
         std::cin >> copy;

         if (stock - copy >= 0)
         {
             std::cout << "\nokk ! we have that copy of book" << '\n';

          std::cout << "you have to pay me :- " <<copy * price << '\n';
          std::cout << "every piece of copy price is 5 rupees ." << '\n';
          std::cout << "return the book under 7 days otherwise plenty is added in your account" << '\n';

          stock -= copy;
        }

        else
           std::cout << "\nwe don't have that much amount of copy of that book" << '\n';
      }

      else
          std::cout << "\nwe don't have any copy of the book" << '\n';
    }
  }

  void display_data()
  {
    std::cout << "\nthere are only  " <<stock << " stock in the library of " <<tittle<<" book"<< '\n';
  }

  book()
  {
    std::cout << "\nwelcome to BIT MESRA library" << '\n';
  }
};


int main()
{
  book b1;

  b1.get_bookdata();
  b1.get_stockdata();
  b1.display_data();
  return 0;
}
