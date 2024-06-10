#include <iostream>
using namespace std;

void print(string *ptr){
    *ptr="Hi "+*ptr;
}
int main()
{
    string n="Nikhil";
    print(&n);
    cout<<n;
    return 0;
}