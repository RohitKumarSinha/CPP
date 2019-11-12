#include <iostream>

int count = 0;

class object
{

public:
  object()
  {
  count++;
  std::cout << "object " << count << " is made" <<'\n';
  }

  ~object()
  {
    std::cout << "object" << count << " is destroyed"<< '\n';
    count--;
  }
};

int main()
{
  object o1, o2, o3;

  return 0;
}
