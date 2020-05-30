#include<bits/stdc++.h>
using namespace std;
int n,k;
int mem[10009][22][22];
int a[10009];
int solve(int i,int kf,int kl)
{
    int    j=n-1-i-kf+kl;
    if(kf+kl>k)
        return 33;
    if(i>=j)
        return 0;
    int &ans=mem[i][kf][kl];
    if(mem[i][kf][kl]!=-1)
        return ans;
    if(a[i]==a[j])
        return  ans=solve(i+1,kf,kl);
    else
    {
        int f=solve(i,kf+1,kl)+1;
        int l=solve(i+1,kf,kl+1)+1;
        ans=min(f,l);
        return ans;
    }

}
int main()
{
    int t;
    cin>>t;
    for(int z=0; z<t; z++)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>a[i];
        memset(mem,-1,sizeof(mem));
        int x=solve(0,0,0);
        if(x==0)
            cout<<"Case "<<z+1<<":"<<" Too easy\n";
        else if(x>k)
            cout<<"Case "<<z+1<<":"<<" Too difficult\n";
        else
            cout<< "Case "<<z+1<<": "<<x<<"\n";

    }
    return 0;
}
