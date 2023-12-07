#include <iostream>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int a = 0, b = 1;
  int f1, f2;
  cout << a << " " << b << " ";
  for (int i = 0; i <= n; i++)
    {
      f1 = a + b;
      cout << f1 << " ";
      a = b;
      b = f1;
    }
}
