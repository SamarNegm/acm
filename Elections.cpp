#include<bits/stdc++.h>
using namespace std;
long long mx,ans,a[3008],sum,q,q2;
vector<pair<int,int> >v;

int main()
{
    int n,m,x,y;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        if(x!=1){
        v.push_back({y,x});
        a[x]++;
        if(a[x]>a[mx])
            mx=x;
        }
        else
            q++;
    }
    sort(v.begin(),v.end());
    for(int i=q,j=0;i<a[mx];i++,j++)
        ans+=v[j].first;

    cout<<ans;



    return 0;
}
