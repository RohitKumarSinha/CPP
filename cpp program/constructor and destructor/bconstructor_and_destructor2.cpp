#include <iostream>
#include <string.h>
class string
{
  char s1[20];
  char s2[10];

public:

  void get_string()
  {
    std::cout << "enter a string :-" << '\n';
    gets(s2);
  }

  void initalize_str()
  {
    int i = 0;

    while (s2[i] != '\0')
    {
      s1[i] = s2[i];
      i++;
    }
  }

  void str_cat()
  {
    strcat(s1, s2);
  }

  void display()
  {
    std::cout << "your catenate string is :- " << s1<< '\n';
  }
};


int main()
{
  string s1;
  s1.get_string();
  s1.initalize_str();
  s1.str_cat();
  s1.display();
}
