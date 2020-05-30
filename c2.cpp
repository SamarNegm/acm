#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,k;vector<pair<int,int> >a,c;int x,s,z;
bool cmp(pair<int,int>f,pair<int,int>s)
{
    if(f.first>=s.first)
        return true;
    return false;
}
int main()
{
    cin>>n>>m>>k>>x>>s;
    for(int i=0;i<m;i++)
       cin>>a[i].first;
    for(int i=0;i<m;i++)
        cin>>a[i].second;
    for(int i=0;i<k;i++)
        cin>>c[i].first;
    for(int i=0;i<k;i++)
        cin>>c[i].second;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end(),cmp);




    return 0;
}
