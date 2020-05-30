
#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >a;
int q;
int dfs(int i)
{
    if(vis[i])
        return;
    if(a[i].size()==1)
        return 1;
    for(int j=0;j<a[i].size();j++)
    {
        q+=dfs(a[i][j]);
    }
}
int main()
{
    int n,x,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x!=-1){



                 a[x].push_back(i+1);

        }

    }
    for(int i=0;i<2002;i++)
    {
        if((int)a[i].size()!=0)
            cout<<(int)a[i].size()<<"  "<<i<<"\n";
           q=0;
           dfs(i,0);
        ans=max(ans,q);
    }
    cout<<max(ans,1);




    return 0;
}
