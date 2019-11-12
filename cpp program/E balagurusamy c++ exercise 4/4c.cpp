// a c++ program whch read and display the matrix using of a function and in row parameter of the matrix
// as a default argument

#include <iostream>
using namespace std;

void matrix(int col, int row = 3) // here int row = 3 is a default argument it means if you doesn't pass the
{                                // value of row in function call then it will automatically take 3 as second argument
  int **p;

  p = new int *[row];

  for (int i = 0; i < row; i++)
  {
    p[i] = new int [col];
  }

  cout << "\nenter your numbers :-" << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> p[i][j];
    }
  }

  cout << "\nhere is your numbers :- " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << p[i][j] << "  ";
    }

    cout << "\n";
  }
  delete [] p;
}


int main()
{
  int row, col;

  cout << "enter the row of the matrix :- ";
  cin >> row;

  cout << "enter the column of the matrix :- ";
  cin >> col;

  matrix(col, row);


  // here we pass only one argument but the matrix function work properly because it take default 3 as second argument
  cout << "\nthe row is now 3 because we pass only column in function matrix " << endl;
  matrix(col);
  return 0;
}
