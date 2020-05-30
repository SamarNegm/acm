#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s1,s2,t,t2;
int n,j,ans;
int a[1000005];
int solve(int i,int k,string s)
{
     if(s1==s){cout<<"hi\n";
        return 0;};
    if(i==-1||k==-1){
      cout<<"ops\n";  return 1e6;}


    if(s1[i]!=s[i])
    {
        t=t2=s;
        swap(t[i],t[k]);
        int g1=solve(i-1,k-1,t )+abs(i-a[k]);
        t2[i]=s1[i];
        cout<<t2<<" t2\n";
        int g2=solve(i-1,k,t2)+1;
        cout<<"g1 g2  "<<g1<<" "<<g2<<"\n";
        return ans=min(g1,g2);
    }
    else
        return solve(i-1,k,s);
}
int main()
{
    cin>>n;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++)
        if(s1[i]=='1')
            a[j++]=i;

    cout<<solve(n-1,j-1,s2);

    return 0;
}
