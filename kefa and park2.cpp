#include<bits/stdc++.h>
using namespace std;
vector<int> v[100005];
int n,k,ans;
int a[100000];
bool vis[1000000];

void dfs(int u,int c)
{
    vis[u] = 1;

    for (int i = 0; i < v[u].size(); i++)
        if (!vis[v[u][i]])
        {

            if(a[v[u][i]]==1)
            {
                if(c+1+a[u]<=k)
                    ans++;
                 dfs(v[u][i],c+1+a[u]);
            }

            else
            {
                if(c+a[u]<=k)
                    ans++;
                dfs(v[u][i],c+a[u]);
            }

        }


}
int main()
{

    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int q;
        cin>>q;
        a[i]=q;
    }
    int a,b;
    for(int i=0; i<n-1; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }

    dfs(1,0);
    cout<<ans;

    return 0;
}
