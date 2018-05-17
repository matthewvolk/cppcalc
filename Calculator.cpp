#include <iostream>

using namespace std;

class Calculator
{
public:
  int Calculate (int, int, char);
}

int main()
{
  std::cout<< "I'm a calculator" <<endl;

  cin.ignore();
  cin.get();
  return 0;
}

int Calculator::Calculate (int x, int y, char operatr)
{
  switch (operatr)
  {
    case '+':
      return x + y;
    case '-':
      return x - y;
    case '*':
      return x * y;
    case '/':
      if (y != 0)
        return x / y;
    default:
      cin >> x >> operatr >> y;
      Calculate(x, y, operatr);
  }
}