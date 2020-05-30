#include<bits/stdc++.h>
using namespace std;
int s[10][10]= {0},dc[10]= {0},dr[10],dj1[20],dj2[20],ans;

void dfs(int v,int add)
{
    int i;
    if(v==8)
    {
        if(add>ans) ans=add;
        return;
    }
    for(i=0; i<8; i++)
    {
        int x=v-i+8;

        if(dj1[i+v]==0&&dj2[x]==0&&dc[i]==0)
        {

            dc[i]=1,dr[v]=1,dj1[i+v]=1,dj2[x]=1;
            dfs(v+1,add+s[v][i]);
            dc[i]=0,dr[v]=0,dj1[i+v]=0,dj2[x]=0;
        }
    }
}


int main()
{
    int t, i, j;
    scanf("%d", &t);
    while(t--)
    {
        int x;

        for(i = 0; i < 8; i++)
        {
            for(j = 0; j < 8; j++)
                scanf("%d", &s[i][j]);
        }
        ans = 0;
        dfs(0, 0);
        printf("%5d\n", ans);
    }
    return 0;
}

