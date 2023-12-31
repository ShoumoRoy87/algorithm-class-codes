#include<bits/stdc++.h>
using namespace std;

int adj[1000][1000];
int visit[1000];
int n,e;
void BFS(int s)
{
    queue<int>Q;
    visit[s]=1;
    cout<<s<<" ";
    Q.push(s);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();

        for(int i=1;i<=n;i++)
        {
            if(visit[i]==0 && adj[u][i]==1)
            {
                visit[i]=1;
                cout<<i<<" ";
                Q.push(i);
            }
        }
    }
}
int main()
{
     
    cin>>n>>e;
    int u,v;

    for(int i=1;i<=e;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            BFS(i);
        }
    }
}