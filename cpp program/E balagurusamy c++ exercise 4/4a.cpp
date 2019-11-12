// a c++ program to read a matrix of size m x n from the keyboard

// iostream is a header file for cout and cin operator
#include <iostream>
using namespace std;

// a function matrix which take two argument and return nothing
void matrix(int row, int col)
{
  int **p; // declares a pointer on the stack which points to pointer(s) on the heap
  p = new int *[row]; // declares a pointer on the stack and initialized it so that it points to an array of row ponter on heap

  for (int i = 0; i < row; i++)
  {
    p[i] = new int [col]; // a pointer on the stack which points to an array of col integers on the heap
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> p[i][j];
    }
  }
  delete [] p; // freed the allocated memory
}


int main()
{
  int row, col;

  cout << "enter the row of the matrix :- ";
  cin >> row;

  cout << "enter the column of the matrix :- ";
  cin >> col;

  matrix(row, col); // passing the row and column size of the matrix in the function matrix
  return 0;
}
