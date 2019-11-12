// allocate the memory of the class book dynamically  with the help of constructor
#include <iostream>
#include <string.h>

class book
{
  char *author;
  char *tittle;
  char *publisher;
  int price;
  int stock;
  int length;
public:

  book()
  {

    char *writer;

    std::cout << "enter the writer name :-" << '\n';
    gets(writer);

    length = strlen(writer);
    author = new char[length + 1];

    strcpy(author, writer);

    char *book_name;
    std::cout << "enter the book name :- " << '\n';
    gets(book_name);

    length = strlen(book_name);
    tittle = new char[length + 1];

    strcpy(tittle, book_name);

    char *seller;
    std::cout << "enter the publisher name :- " << '\n';
    gets(seller);

    length = strlen(seller);
    publisher = new char[length + 1];

    strcpy(publisher, seller);

    int amount;
    int position;

    std::cout << "enter the price and stock of the book :-" << '\n';
    std::cin >> amount >> position;

    price = amount;
    stock =  position;

  }

  void display()
  {
    std::cout << "\n      books detail :     " << '\n';
    std::cout << "author      :" << author << '\n';
    std::cout << "tittle      :" << tittle <<'\n';
    std::cout << "publisher   :" << publisher << '\n';
    std::cout << "price       :" << price <<'\n';
    std::cout << "stock       :" <<stock << '\n';
  }

  void deleted()
  {
    delete tittle;
    delete author;
    delete publisher;

    std::cout << "all pointers memory have released" << '\n';
  }

};

int main()
{
  book b[10];

  std::cout << "enter book tittle, author, publisher, price, stock" << '\n';
  for (int i = 0; i < 10; i++)
       b[i];

  return 0;
}
