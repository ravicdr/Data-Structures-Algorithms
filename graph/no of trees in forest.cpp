#include<bits/stdc++.h>
using namespace std;
#define z long long int 

void dfs(vector<int> v[],bool vis[],int sr)
{
    if(vis[sr]==false)
    {
        vis[sr]=true;
        for(auto u : v[sr])
        dfs(v,vis,u);
    }
}

int main()
{
    z n,e,i,j;
    cin>>n>>e;
    vector<int> v[n];
    while(e--)
    {
        z x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ans=0;
    bool vis[n]={false};
    for(i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            dfs(v,vis,i);
            ans++;
        }
    }
    cout<<ans;
}
