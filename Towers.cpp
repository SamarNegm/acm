#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v,ans;
int main()
{
    int n,k,a,j=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    while(j++<k&&v[0].first<v[n-1].first)
    {
        ans.push_back({v[n-1].second,v[0].second});
        v[0].first++;
        v[n-1].first--;
          sort(v.begin(),v.end());

    }
 printf("%d %d\n",v[n-1].first-v[0].first,ans.size());
 for(int i=0;i<ans.size();i++)
        printf("%d %d\n",ans[i].first,ans[i].second);


    return 0;
}
