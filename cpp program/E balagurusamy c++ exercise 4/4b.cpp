// a c++ program to read a matrix of size m x n from the keyboard and display the same on the screen using function

#include <iostream>
using namespace std;

// a function name matrix which take two argument and doesn't return
void matrix(int row, int col)
{
  int **p;
  p = new int *[row];

  for (int i = 0; i < row; i++)
  {
    p[i] = new int [col];
  }

  cout << "enter the numbers :- " << endl; // endl help to move the cursor in next line

// read the value of matrix
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> p[i][j];
    }
  }

// display the value of matrix
  cout << "\nhere  is your matix " << endl;

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

  cout << "enter the row size of the matrix :- ";
  cin >> row;

  cout << "enter the column size of the matrix :- ";
  cin >> col;

  matrix(row, col);

  return 0;
}
