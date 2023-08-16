#include<bits/stdc++.h>
using namespace std;
struct Rule
{
    int obj;
    double pbw;
};
bool comparepbw(Rule r1, Rule r2)
{
    if(r1.pbw>r2.pbw)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    double profit[n],weight[n];

    for(int i=0;i<n;i++)
    {
        cin>>profit[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    Rule ara[n];
    for(int i=0;i<n;i++)
    {
        ara[i].obj=i;
        ara[i].pbw=profit[i]/weight[i];
    }
    sort(ara,ara+n,comparepbw)


}