#include<bits/stdc++.h>
using namespace std;//coin change
int main()
{
    int n,m;
    cin>>n>>m;
    int coin[n];
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }
    int V[n+1][m+1];
    for(int j=1;j<m+1;j++)
    {
        V[0][j]=INT_MAX;

    }
    for(int i=0;i<n+1;i++)
    {
        V[i][0]=0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(j<coin[i-1])
            {
                V[i][j]=V[i-1][j];
            }
            else
            {
                V[i][j]= min(V[i-1][j],1+V[i][j-coin[i-1]]);
            }
        }
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int i=n,j=m;
    while(i!=0)
    {
        if(V[i][j]==V[i-1][j])

        {
            cout<<coin[i-1]<<"is not selected"<<endl;
            i=i-1;
            j=j;
        }
        else
        {
            cout<<coin[i-1]<<"is selected"<<endl;
            j=j-coin[i-1];
            i=i-1;
        }
    }
}
