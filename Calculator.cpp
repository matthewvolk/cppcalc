#include <iostream>

using namespace std;

class Calculator
{
public:
  int Calculate (int, int, char);
}

int main()
{
  int x, y, result;
  char operatr;
  cout<< "I'm a calculator" <<endl;
  cout<< "Please enter num1, operator, num2: " <<endl;


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