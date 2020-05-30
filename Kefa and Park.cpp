#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >v;
int k,ans;
int s[100005];
bool vis[100005];
void dfs(int u,int c)
{
    if(vis[u])
        return;
    if(v[u].size()==1&&u!=1)
    {

        if(c<=k)
            ans++;
    }
    if(c>k){
        return;
    }
        if(s[u]&&c==0)
            c++;
    vis[u] = 1;
    for (int i = 0; i < v[u].size(); i++)
    {
        if(s[v[u][i]]){
            dfs(v[u][i],c+1);
        }
           else{
            dfs(v[u][i],0);
           }

    }





}
int main()
{
    int n;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    int a,b;
    for(int i=0; i<n-1; i++)
    {
        scanf("%d%d", &a, &b);

        v[a].push_back(b);
        v[b].push_back(a);
    }



    dfs(1,0);;
    cout<<ans;
}
