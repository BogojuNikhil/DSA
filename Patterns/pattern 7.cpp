#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int i = 1;
  char c = 'A';
  while (i <= n)
    {
      int j = 1;
      while (j <= n)
	{
	  cout << c;
	  c++;
	  j++;
	}
      cout << endl;
      i++;
    }
}
