#include <iostream>

using namespace std;
int main()
{

  cout << "Enter the length of the room :- ";
  int room_len{0};
  cin >> room_len;

  cout << endl
       << "Enter the width of the room :- ";
  int room_wid{0};
  cin >> room_wid;

  cout << endl
       << "The area of your room is " << room_len * room_wid;

  return 0;
}