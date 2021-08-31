// in this program i take fav number value from user and print that fav number with appropriate message

#include <iostream>
int main()
{
  int fav_num;
  std::cout << "Enter your favorite number between 1 and 100:  ";
  std::cin >> fav_num;
  std::cout << "Amazing !! that's my favorite number t00 " << std::endl;
  std::cout << "no seriously!! " << fav_num << " is my favorite number" << std::endl;
  return 0;
}