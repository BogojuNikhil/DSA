#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
    {
      int j = 1;
      while (j <= n)
	{
	  char c = 'A' + i + j - 2;
	  cout << c;
	  j++;
	}
      cout << endl;
      i++;
    }
}
