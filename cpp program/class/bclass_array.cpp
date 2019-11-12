#include <iostream>

class employee
{
  int age;
  char name[20];

public :

    void set_data(void);
    void show_data(void);
};

void employee :: set_data(void)
{
  std::cin >> name;

  std::cout << "enter the age of the employee" << "\n";
  std::cin >> age;
  std::cout << "\n" << '\n';
}

void employee :: show_data(void)
{
  std::cout << "name        " << name << '\n';
  std::cout << "age         " << age << "\n\n";
}

int main()
{
  int i;
  employee e1[3];

  for (i = 0; i < 3; i++)
  {
    std::cout << "enter the name of employee" << i + 1 << '\n';
     e1[i].set_data();
  }

  for (i = 0; i < 3; i++)
  {
    e1[i].show_data();
  }

  return 0;
}
