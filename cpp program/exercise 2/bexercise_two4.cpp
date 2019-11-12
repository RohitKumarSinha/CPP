// write a program to read two value of a b and c and display the value of x, where
// x = a / b - c
// test your program for following values :
// (a) a = 250, b = 85, c = 25
// (b) a = 300, b = 70, c = 70

#include <iostream>
using namespace std;

class evaluate
{
  int num_one, num_two, num_three;

public:

    evaluate(int first_num, int second_num, int third_num)
    {
      num_one = first_num;
      num_two = second_num;
      num_three = third_num;
    }

    void calculate(void);
};

void evaluate :: calculate()
{
  int res;
  res = (num_one / num_two) - num_three;

  cout << "after calculate your numbers your result is : "<< res << endl;
}

int main()
{
  evaluate e1(250, 85, 25);
  evaluate e2(300, 70, 70);

  e1.calculate();
  e2.calculate();

  return 0;
}
