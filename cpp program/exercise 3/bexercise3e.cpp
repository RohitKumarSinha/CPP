#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  char name[3][10];
  int runs[3], innings[3], not_out[3];
  float batt_avg[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "enter the player name, runs, innings and not out one by one :- " << endl;
    cin >> name[i] >> runs[i] >> innings[i] >> not_out[i];
    batt_avg[i] = (runs[i] / (innings[i] - not_out[i]));
  }

  system("cls");

  cout << "Player's name   Runs   Innings   Times not out   batting avg" << "\n\n";
  for (int i = 0; i < 3; i++)
  cout << name[i] << "           " << runs[i] << "       " << innings[i] << "         " << not_out[i] <<"         " << batt_avg[i] <<endl;

  return 0;
}
