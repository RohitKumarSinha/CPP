#include <iostream>
#include <string.h>
class book
{
  char *author;
  char *tittle;
  int price = 50;
  int stock = 100;
  int length1, length2;

public:

   book (char *writer, char *cover)
   {
     length1 = strlen(writer);
     length2 = strlen(cover);

     author = new char[length1 + 1];
     tittle = new char[length2 + 1];

     strcpy(author, writer);
     strcpy(tittle, cover);

   }

   void display()
   {
     std::cout << "author of  " <<tittle <<" is "<<author<< '\n';
   }

    void book :: join(book &a, book &b);
};

void book :: join(book &a, book &b)
{
  length1 = a.length1 + b.length1;
  length2 = a.length2 + b.length2;

  delete author;
  delete tittle;

  author = new char[length1 + 1];
  tittle = new char[length2 + 1];

  strcpy(author, a.author);
  strcpy(tittle, b.tittle);
}

int main()
{
  book b1, b2, b3;

  b1.join("let us c", "yashwant kanetkar");
  b2.join("programming in c", "dennis ritchie");
  b3.join("pyhsics", "s.cand");

  b1.display();
  b2.display();
  b3.display();

  return 0;
}
