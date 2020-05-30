#include<bits/stdc++.h>
using namespace std;
char c[505][505];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
bool vis[505][505];
int x,y,k;
void dfs(int a,int b)
{
    if(a<0||a>x||b<0||b>y||k==0)return;
    if(c[a][b]!='.')return;
    if(vis[a][b])return;
    vis[a][b]=1;
    for(int i=0;i<4;i++)
        dfs(a+dx[i],b+dy[i]);
        if(k){ c[a][b]='X'; k--; }

}

int main()
{
cin>>x>>y>>k;
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
    {
        cin>>c[i][j];
    }
      for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
    {
        if(c[i][j]=='.')
       dfs(i,j) ;
       if(k==0)
        break;
         }
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
    {
        cout<<c[i][j];
    }
    cout<<"\n";
     }



    return 0;
}
