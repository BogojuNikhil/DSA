#include <iostream>
using namespace std;

int main(){
  int a=2;
  int n;
  
  int sum;
  cout<<"enter a number n";
  cin>>n;
  while(a<=n){
     sum=sum+a;
     a=a+2;
  }
  cout<<sum;
}
