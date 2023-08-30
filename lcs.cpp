#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;

    getline(cin,str1);
    getline(cin,str2);

    int n=str1.size();
    int m=str2.size();

    int LCS[n+1][m+1];
    memset(LCS,0,sizeof(LCS));

    for(int i=1;i<n+1;i++)
    {

        for(int j=1;j<m+1;j++)
        {

            if(str1[i-1]==str2[j-1])
            {
                LCS[i][j]=1+LCS[i-1][j-1];
            }
            else
            {
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }
    for(int i=0;i<n+1;i++)
    {

        for(int j=0;j<m+1;j++)
        {

            cout<<LCS[i][j]<<" ";
        }
        cout<<endl;
    }

}
