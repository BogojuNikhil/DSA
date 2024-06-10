#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NoOfDist(int arr[] , int n ){
    int count=0;
    for (int i=0;i<n;i++)
    {
        bool isdis=true;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                isdis=false;
                break;
            }
        }
        if(isdis==true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    cout<<NoOfDist(arr ,n);
    return 0;
}
