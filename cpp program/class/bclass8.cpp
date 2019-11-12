// objject as argument
// class to calculate the time in hour, minute, second

#include <iostream>

class time
{
  int hour, minute, second;

public:

  void set_time(int , int , int );
  time calculate(time);
  void display(void);
};

void time :: set_time(int h, int m, int s)
{
  hour = h;
  minute = m;
  second = s;
}

time time :: calculate(time t1)
{
  time sum;

  sum.hour = hour + t1.hour;

  if (sum.hour > 24)
      sum.hour = sum.hour / 24;

  sum.minute = minute + t1.minute;

  if (sum.minute > 60)
  {
    sum.hour += (sum.minute / 60);
    sum.minute = sum.minute % 60;
  }

  sum.second = second + t1.second;

  if (sum.second > 60)
  {
    sum.minute += (sum.second / 60);
    sum.second = sum.second % 60;
  }

  return (sum);
}
  void time :: display()
  {
    std::cout << "time is " << hour <<" hour minute " << minute <<"second "<<second << '\n';
  }

int main()
{
  time t1, t2, t3;
  t1.set_time(3, 40,  30);
  t2.set_time(5, 30,  40);

  t1.display();
  t2.display();

  t3 = t1.calculate(t2);
  t3.display();

  return 0;
}
