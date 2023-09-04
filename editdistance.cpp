#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;

    getline(cin,str1);
    getline(cin,str2);

    int n=str1.size();
    int m=str2.size();

    int ED[n+1][m+1];

    for(int j=0;j<m+1;j++)
    {
        ED[0][j]=j;
    }
    for(int i=0;i<n+1;i++)
    {
        ED[i][0]=i;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                ED[i][j]=ED[i-1][j-1];
            }
            else
            {
                ED[i][j]=1+min({ED[i-1][j],ED[i][j-1],ED[i-1][j-1]});
            }

        }
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            cout<<ED[i][j]<<" ";
        }
        cout<<endl;
    }

    }

