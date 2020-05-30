#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s[100000];
int x[1000000],n,m,a,b;
int mem[1009][1009][3];
int solve(int c,int w,int l)
{
    if(c==m){
        if(w<a||w>b)
        return 100000000;
        return 0;
        }
  int &ans=mem[c][w][l];
    if(ans!=-1)
        return ans;
    int dots = 100000000;
    if((c==0)||(l==0&&w+1<=b)||(l==1&&w>=a))
    dots=n-x[c]+solve(c+1,(l==0)?w+1:1,0);
    int hashs = 100000000;
    if((c==0)||(l==1&&w+1<=b)||(l==0&&w>=a))
    hashs=x[c]+solve(c+1,(l==1)?w+1:1,1);
    ans=min(dots,hashs);
    return ans;

}
int main()
{
    scanf("%d%d%d%d",&n,&m,&a,&b);
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        if(s[i][j]=='#')
            x[j]++;
    }
    memset(mem,-1,sizeof(mem));
    cout<<solve(0, 0, 2);

    return 0;
}
