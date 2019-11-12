#include <iostream>
using namespace std;

int main()
{
  char name[5][10];
  int choice;

  for (int i = 0; i < 5; i++)
  {
    cout << "enter the candidate name  :- ";
    cin >> name[i];
  }

  int j = 0;
  int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0;

  while (j < 10)
  {
    cout << "\n\n";
    cout << "for candidate one press 1 " << endl;
    cout << "for candidate two press 2 " << endl;
    cout << "for candidate three press 3 " << endl;
    cout << "for candidate four press 4 " << endl;
    cout << "for candidate five press 5 " << endl;
    cin >> choice;

    if (choice == 1)
         cand1 += 1;

    else if (choice == 2)
          cand2 += 1;

    else if (choice == 3)
           cand3 += 1;

    else if (choice == 4)
          cand4 += 1;

    else if (choice == 5)
          cand5 += 1;

    else
       cout << "invalid input ";

      j++;
  }

  cout << "\n\n";
  cout << name[0] << " has " << cand1 << " votes" << endl;
  cout << name[1] << " has " << cand2 << " votes" << endl;
  cout << name[2] << " has " << cand3 << " votes" << endl;
  cout << name[3] << " has " << cand4 << " votes" << endl;
  cout << name[4] << " has " << cand5 << " votes" << endl;

  cout <<"\n\n";
  if ((cand1 > cand2) && (cand1 > cand3) && (cand1 > cand4) && (cand1 > cand5))
      cout << name[0] <<" wins";

  else if ((cand2 > cand1) && (cand2 > cand3) && (cand2 > cand4) && (cand2 > cand5))
       cout << name[1] <<" wins";

   else if ((cand3 > cand1) && (cand3 > cand2) && (cand3 > cand4) && (cand3 > cand5))
        cout << name[2] <<" wins";

   else if ((cand4 > cand1) && (cand4 > cand2) && (cand4 > cand3) && (cand4 > cand5))
        cout << name[3] <<" wins";

    else if ((cand5 > cand1) && (cand5 > cand2) && (cand5 > cand3) && (cand5 > cand4))
       cout << name[4] << " wins";

     else
        cout << "nobody wins";

  return 0;
}
