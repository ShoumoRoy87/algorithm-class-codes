#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[]={5,8,6,1,7,9};

    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
               swap(num[j],num[j+1]);
            }
        
            for(int k=0;k<6;k++)
                {
                    cout<<num[k]<<" ";
                }
                 cout<<endl;
         }
    }

}
