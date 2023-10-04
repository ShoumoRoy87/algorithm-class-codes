#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;//num of nodes
    int e;//num of edges

    cin>>n>>e;
    int graph[n+1][n+1];

    memset(graph,0,sizeof(graph));

    int u,v;
    for(int i=1;i<=e;i++)
    {
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;//as bidirectional so two input
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)

        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}