#include<iostream>

using namespace std;
int
main ()
{
  string s;
  cin >> s;
  int hash[256] = { 0 };
  for (int i = 0; i < s.size (); i++)
    {
      hash[s[i]]++;
    }
  int a;
  cin >> a;
  while (a--)
    {
      char m;
      cin >> m;
      cout << hash[m] << endl;
    }
}
