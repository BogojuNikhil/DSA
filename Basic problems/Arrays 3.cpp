#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxOfArr(int arr[] , int n ){
    int Max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max=arr[i+1];
        }
    }
    return Max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    cout<<MaxOfArr(arr ,n);
    return 0;
}
