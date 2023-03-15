#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];
    int i,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(5-a[i]>=k){ans++;}
    }

    cout<<ans/3;






    return 0;
}


