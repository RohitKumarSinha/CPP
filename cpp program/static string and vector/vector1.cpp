#include <iostream>
#include <vector>

using namespace std;

class string
{
public:

  string()
  {
    int count;

    cout << "enter how much character in your string : " << endl;
    cin >> count;

     count = count + 1;

    vector<char> str; //default size
    str.resize(count); // set resize with +1 is for null operator

    cout << "enter your string :- " << endl;
    cin >> str;

    cout << "your string is :- " << str << endl;
  }
};

int main()
{
  string s;

  return 0;
}
