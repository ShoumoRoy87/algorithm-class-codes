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
    sort(ara,ara+n,comparepbw);
     double X[n];
    memset(X,0, sizeof(X));
    double RW=m;
    for(int i=0;i<n;i++)
    {
        if(RW>=weight[ara[i].obj])

        {
            RW=RW-weight[ara[i].obj];
            X[ara[i].obj]=1;
        }
        else
        {
            X[ara[i].obj]=RW/weight[ara[i].obj];
            RW=0;
        }
        
        
    }
    double maxprof=0;
        for(int i=0;i<n;i++)
        {
            maxprof=maxprof+(X[i]*profit[i]);
        }
        cout<<maxprof<<endl;

}