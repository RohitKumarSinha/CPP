#include <iostream>
using namespace std;

class temperature
{
  float fahren, celsius;

public:

  temperature(float fah)
  {
    fahren = fah;
  }

  void convert_celsius(void);
};

void temperature :: convert_celsius()
{
  celsius = (fahren * 32) / 1.8;

  cout << "your temperature in celsius is " << celsius << endl;
}

int main()
{
  float temp;

  cout << "enter the temperature in fahrenheit : - " << endl;
  cin >> temp;

  temperature t1(temp);
  t1.convert_celsius();

  return 0;
}
