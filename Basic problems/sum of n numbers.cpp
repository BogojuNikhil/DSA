#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "enter a number";
    cin>>a;
    int num=1;
    int sum=0;
    while (num<=a){
    sum=num+sum;
    num++;
    }
    cout<<sum;
}
