#include<bits/stdc++.h>
using namespace std;
vector<int>graph[30];
int n,e;
int visit[1000];

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
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(visit[v]==0)
            {
                visit[v]=1;
                cout<<v<<" ";
                Q.push(v);
            }
        }
    }
}

int main()
{
    int u,v;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    BFS(1);
}