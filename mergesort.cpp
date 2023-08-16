#include<bits/stdc++.h>
using namespace std;
int m=5,n=5;
int C[10]={};
void Mergee(int A[],int B[])
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if (A[i]<B[j])
        {
            C[k]=A[i];
            k++;
            i++;
        }
        else
        {
            C[k]=B[j];
            k++;
            j++;
        }
    }
    for(;i<m;i++)
    {
        C[k]=A[i];
        k++;
    }
    for(;j<n;j++)
    {
        C[k]=B[j];
        k++;
    }
}
int main()
{
    int A[]={2,4,6,8,10};
    int B[]={1,3,5,7,9};
    Mergee(A,B);
    for(int i=0;i<10;i++) 
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;


}