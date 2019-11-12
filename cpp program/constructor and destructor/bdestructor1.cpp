#include <iostream>

class memory
{
  int *p;

public:

  memory(int size)
  {
    p = new int[size];
    std::cout << "memory of the size " <<size << " is created"<< '\n';
  }

  ~memory()
  {
    delete p;
    std::cout << "memory of the size " << " is destroyed" << '\n';
  }
};

int main()
{
  memory t(5);

  return 0;
}
