#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cin>>n;
  int i=1;
  while (i<=n){
      int j=1;
      int c=i;
      while (j<=i)
      {
          cout<<c;
          c++;
          j++;
      }
      cout<<endl;
      i++;
  }
}
