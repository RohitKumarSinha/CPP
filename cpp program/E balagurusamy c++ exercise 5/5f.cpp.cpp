// refer to program 5.11 and write a function that receives two matrix objects as an argument and returns
// a new matrix object containing their multiplication result

#include <iostream>

class matrix
{
  int m1[3][3];
  int m2[3][3];

public:

  void read_data()
  {
    int i, j;
    std::cout << "enter the first matrix of 3x3" << '\n';
    for (i = 0; i <= 2; i++)
    {
      for (j = 0; j <= 2; j++)
      {
        std::cout << "m[" << i << "][" << j <<"]" <<'\n';
        std::cin >> m1[i][j];
      }
    }
  }

  void read_data1()
  {
    int i, j;
    std::cout << "enter the second matrix of 3x3" << '\n';
    for (i = 0; i <= 2; i++)
    {
      for (j = 0; j <= 2; j++)
      {
        std::cout << "m[" << i << "][" << j <<"]" <<'\n';
        std::cin >> m2[i][j];
      }
    }
  }

  void show_data()
  {
    int i, j;
    std::cout << "here is your first matrix" << '\n';
    for (i = 0; i <= 2; i++)
    {
      std::cout << '\n';
      for (j = 0; j <= 2; j++)
      {
        std::cout << m1[i][j] <<'\t';
      }
    }
  }

  void show_data1()
  {
    int i, j;
    std::cout <<'\n'<< "here is your second matrix" << '\n';
    for (i = 0; i <= 2; i++)
    {
      std::cout << '\n';
      for (j = 0; j <= 2; j++)
      {
        std::cout << m2[i][j] <<'\t';
      }
    }
  }

  friend void multiple(matrix);

};

void multiple(matrix m3)
{

  int m4[3][3], i, j;

  std::cout << "\nhere is your new matrix" << "\n\n";
  for (i = 0; i <= 2; i++)
  {  std::cout << '\n';
    for (j = 0; j <= 2; j++)
    {
      m4[i][j] = m3.m1[i][j] * m3.m2[i][j];
      std::cout << m4[i][j] << '\t';
    }
  }


}


int main()
{
  matrix m1, m2;

  m1.read_data();
  m1.read_data1();

  m1.show_data();
  m1.show_data1();

  multiple(m1);

return 0;
}
