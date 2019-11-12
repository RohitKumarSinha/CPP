#include <iostream>
#include <string.h>

class string
{
private:

  char *s;
  int size;

public:

   string(char *);  // constructor
   ~string();  // destructor

};

string::string(char *c) // here string is constructor so it is call when the constructor is made
{
  size = strlen(c);
  std::cout << "size of string" << size << '\n';
  s = new char[size + 1];
  strcpy(s, c);
}

string::~string() // here ~string is destructor so it call only when the program going to terminate
{
  delete []s; // here s delete is the release the memory of s
}

int main()
{
  char s = 'r';
   string s1(&s);
   return 0;
}
