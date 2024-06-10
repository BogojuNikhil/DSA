#include <iostream>
using namespace std;

void print( int &v){
    int *p=&v;
    *p=*p+10;
}
int main()
{
    int v=10;
    print(v);
    cout<<v;
    return 0;
}