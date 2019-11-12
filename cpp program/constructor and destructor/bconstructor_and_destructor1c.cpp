#include <iostream>

class matrix
{

  int m[3][3];

public:

  matrix()
  {
    std::cout << "\n\nobject is made" << '\n';
  }

  void get_data()
  {
    int i, j;
    std::cout << "\n\nenter the matrix 3x3 :" << '\n';

    for (i = 0; i <= 2; i++)
    {
      for (j = 0; j <= 2; j++)
      {
        std::cin >> m[i][j];
      }
    }
  }

  void display_data()
  {
    int i, j;
    std::cout << "\nhere is your matrix : " << '\n';

    for (i = 0; i <= 2; i++)
    {
      std::cout << '\n';
      for (j = 0; j <= 2; j++)
         std::cout << m[i][j] << '\t';
    }
  }

friend matrix trans(matrix);
};

matrix trans (matrix m1)
{
  matrix m2;
  int i, j;

  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      m2.m[i][j] = m1.m[j][i];
    }
  }

  return (m2);
}

int main()
{
  matrix m1, m2;
  int i = 0;

  while (i < 10)
  {
  m1.get_data();
  m1.display_data();
  m2 = trans(m1);

  std::cout << "\nhere is your transpose matrix " << '\n';
  m2.display_data();

  i++;
  }
  return 0;
}
