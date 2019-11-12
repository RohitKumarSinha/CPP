#include <iostream>
#include <string.h>

class string
{
  char *name;
  int length;

public:

  string()
  {
    length = 0;
    name = new char [length + 1];
  }

  string(char *s)
  {
    length = strlen(s);
    name = new char[length + 1];

    strcpy(name, s);
  }

  void display()
  {
    std::cout << "your name is :- " << name << '\n';
  }
  void str_join(string &a, string &b);
};

void string :: str_join(string &a, string &b)
{
  length = a.length + b.length;
  delete name;

  name = new char[length + 1];
  strcpy(name, a.name);
  strcat(name, b.name);
};

int main()
{
  string name1("rohit"), name("ritik"), s1;
  name1.display();
  name.display();
  s1.str_join(name1, name2);

  s1.display();

  return 0;
}
