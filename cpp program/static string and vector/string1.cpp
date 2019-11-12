#include <iostream>
#include <string>

using namespace std;
class opearation
{
private:
     string s1, s2, s;
     int res;

public:

  void input(void);
  void output(void);
  void catenate(void);
  void greater(void);
  void smaller(void);
  void equal(void);
};

void opearation :: input()
{
  cout << "enter two strings  :"<< endl;
  cin >> s1 >> s2;
}

void opearation :: output()
{
  cout << "your strings is :" << s1 << "  " << s2 << endl;
}

void opearation :: catenate()
{
  s = s1 + s2;
  cout << "your catenate string is " << s << endl;
}

void opearation :: greater()
{
  res = s1 > s2;

  if(res)
     cout << "string one is greater than string two" << endl;

}

void opearation :: smaller()
{
  res = s2 > s1;

  if(res)
      cout << "string one is smaller than string two" << endl;
}

void opearation :: equal()
{
  res = (s1 == s2);

  if(res)
      cout << "both strings are not equal" << endl;

  else
     cout << "both strings are equal" << endl;
}



int main()
{
  opearation s;x ccv
   while(1)
  {
    int choice;

    cout <<"\n\n";
    cout << "press 1 for input the string ."<< endl;
    cout << "press 2 for display the string ."<< endl;
    cout << "press 3 for catenate the two string ."<< endl;
    cout << "press 4 for cheking that first string is greater than second string or not ." << endl;
    cout << "press 5 for checking that first string is smaller than second string or not ." << endl;
    cout << "press 6 for checking that both string are equal or not ." << endl;
    cout << "press 7 for exit the program ." << endl;
    cin >> choice;

    switch(choice)
    {
      case 1:
        s.input();
        break;

      case 2:
         s.output();
         break;

      case 3:
         s.catenate();
         break;

      case 4:
  +

         s.greater()
         ;
         break;

      case 5:
          s.smaller();
          break;

      case 6:
           s.equal();
           break;

      case 7:
           exit(0);

      default:
          cout << "invalid input";
    }
  }

  return 0;
}
