// create matrix with the help of dynamically array

#include <iostream>

class matrix
{
  int **p; //declare a pointer of pointer in int p
  int x, y;

public:
   void get_element(int i, int j, int value)
   {
     p[i][j] = value;
   }

   int & display_element(int i, int j) // here we
   {
     return (p[i][j]);
   }

   matrix(int, int);
};

matrix :: matrix(int r, int c)
{

  x = r; // assign the row value in x
  y = c; // assign the column value in y

  p = new int *[x]; // on the right hand side we allocate the dynamically memory in pointer x

  for (int i = 0; i < x; i++)
       p[i] = new int[y];  // here we make 2d array we assign one by one dynamically value in the p[i]
}

int main()
{
  int m, n;

  std::cout << "enter the size of the matrix" << '\n';
  std::cin >> m >> n;

  matrix m1(m, n);

  std::cout << "enter the element of the element row by row" << '\n';

  int value;

  for(int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      std::cin >> value;
      m1.get_element(i, j, value);
    }
  }

  std::cout  << '\n';
  std::cout << m1.display_element(1, 2) << '\n';

  return 0;
}
