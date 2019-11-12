#include <iostream>
#include <string>

using namespace std;

class operation
{
public:

  operation()
  {
    string str1 = "hello "; // storing characters into str1 here string is a keyword to represent string
    string str2 = "world"; // storing characters into str2

    int str = (str1 == str2); // instead of strcmp in c we use str1 == str2

    cout << str;
  }

};

int main()
{
  operation o;

  return 0;
}
