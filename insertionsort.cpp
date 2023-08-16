#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;//taking input num
    int arr[100]={10,9,7,8,6};
    cout<<"Before sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;//printing array
    }
    cout<<endl;

    for(int i=0;i<n;i++) 
    {
        int x=arr[i];//storing the value of first index in a variable
        int j=i-1;
        while(j>=0 && arr[j]>x)//comparing two values
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}