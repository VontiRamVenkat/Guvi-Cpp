#include <iostream>
int main()
{
  using namespace std;
  int a, b;
  char op;
  cout << "Enter a number: ";
  cin >> a >> op >> b;
  cout << "a = " << a << "; b = " << b << endl;
  switch(op)
  {
      case '/' :
         cout << "a / b = " << a / b << endl;
         break;
      case '%' :
         cout << "a % b = " << a / b << endl;
         break;
  }
  return 0;
}
