#include<bits/stdc++.h>
using namespace std;
int n,a[1000000],mem[10000][3][3][3];
string s[1000000];
int solve(int i,bool x,bool b,bool c)
{
    if(x&&b&&c)
        return 0;
    if(i==n)
        return 2e9;
    int &ans=mem[i][x][b][c];
    if(ans!=-1)
        return ans;
    int ans1=solve(i+1,x,b,c);
    for(int j=0;j<s[i].length();j++)
        if(s[i][j]=='A')
        x=1;
    else if(s[i][j]=='B')
        b=1;
    else
        c=1;
    int ans2=solve(i+1,x,b,c)+a[i];
    ans=min(ans1,ans2);
    return ans;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i]>>s[i];
    memset(mem,-1,sizeof(mem));
    int z=solve(0,0,0,0);
    cout<<(z==2e9?-1:z);


    return 0;
}
