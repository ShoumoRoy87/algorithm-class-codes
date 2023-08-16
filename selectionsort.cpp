#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int  num[100]={10,9,8,7,6};
    cout<<"Before sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<< " ";
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(num[i]>num[j]);
            {
                swap(num[i],num[j]);
            }
        }
    }
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<< " ";
    }
}