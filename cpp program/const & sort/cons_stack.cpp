#include <iostream>
using namespace std;

class stack
{
private:
  char data[10];
  int top;

public:
  stack()
  {
    top(-1);
  }

  int empty()
  {
    return (top == -1);
  }

  void push(char x)
  {
    data[++top] = x;
  }

  void pop()
  {
    --top;
  }

  char top()
  {
    return data[top];
  }
};

int main()
{
  char str[10] = "abcde";
  stack s;

  for (int i = 0; i < 5; ++i)
       s.push(str[i]);

  while (!s.empty())
  {
    cout << s.top();
    s.pop()
  }
  return 0;
}
