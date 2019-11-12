#include <iostream>
using namespace std;

class ASCII
{
  char letter;

public:

  ASCII(char word)
  {
    letter = word;
  }

  void ASCII_code(void);
};

void ASCII :: ASCII_code()
{
  int code;
  code = letter;

  cout << "ASCII code of your letter is : "<< code;
}

int main()
{
  char ch;

  cout << "enter a character :- " << endl;
  cin >> ch;

  ASCII a(ch);
  a.ASCII_code();

  return 0;
}
