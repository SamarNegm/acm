#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int ,long long>  f,pair<int ,long long>  s)
{
     if(f.second>s.second)
        return true;
         if(f.first<s.first&&f.second==s.second)
            return true;
    return false;
}
vector<pair<int ,long long> >v;

int main()
{
int n;
long long sump;
scanf("%d",&n);

for(int i=0;i<n;i++)
{
    long long sum=0,d;
    for(int j=0;j<4;j++)
    {
        scanf("%lld",&d);
        sum+=d;
    }
    v.push_back({i,sum});
    if(i==0);
    sump=sum;
}
sort(v.begin(),v.end(),cmp);
for(int i=1,j=0;;j++,i++)
    if(v[j].first==0)
{
    cout<<i;
    return 0;
}


    return 0;
}
