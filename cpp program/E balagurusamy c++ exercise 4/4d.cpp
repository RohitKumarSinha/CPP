// a c++ program whch read and display the matrix using of a function matrix
// and overload matrix()

#include <iostream>
using namespace std;

void matrix(int col, int row)
{
  int m[row][col];

  cout << "\nenter your numbers :-" << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> m[i][j];
    }
  }

  cout << "\nhere is your numbers :- " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << m[i][j] << "  ";
    }

    cout << "\n";
  }
}

void matrix(int col, long int row = 3) // here long int row = 3 is a default argument it means if you doesn't pass the
{                                // value of row in function call then it will automatically take 3 as second argument
  int m[row][col];

  cout << "\nenter your numbers :-" << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> m[i][j];
    }
  }

  cout << "\nhere is your numbers :- " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << m[i][j] << "  ";
    }

    cout << "\n";
  }
}


int main()
{
  int row, col;

  cout << "enter the row of the matrix :- ";
  cin >> row;

  cout << "enter the column of the matrix :- ";
  cin >> col;

  matrix(col, row);

  cout << "\nthe row is now 3 because we pass only column in function matrix " << endl;
  matrix(col);
  return 0;
}
