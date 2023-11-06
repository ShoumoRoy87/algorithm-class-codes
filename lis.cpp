#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int LIS[n];
    for(int i=0;i<n;i++)
    {
        LIS[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(ara[i]>ara[j])
            {
                LIS[i]=max(LIS[i],1+LIS[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<LIS[i]<<" ";
    }
}