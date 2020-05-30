#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e6+5;
int n,k;
ll arr[N];
ll arrs[N];
pair<ll,ll> mxs[N];
ll ans=-1;
ll ansl,ansr;
int main()
{
      scanf("%d %d",&n,&k);
      for(int i=0;i<n;++i)
      {
          scanf("%d",arr+i);
      }
      ll sum=0;
       for(int i=0;i<k;++i)
       {
           sum+=arr[i];
       }
        for(int i=0;i<n;++i)
        {
            arrs[i]=sum;
            sum+=arr[k+i];
            sum-=arr[i];
        }
        for(int i=n-1;i>-1;--i)
        {
            if(mxs[i+1].first>arrs[i])
            {
                mxs[i].first=mxs[i+1].first;
                mxs[i].second=mxs[i+1].second;
            }else
            {
                mxs[i].first=arrs[i];
                mxs[i].second=i;
            }

        }

       for(int i=0;i<n;++i)
       {
           if(arrs[i]+mxs[i+k].first>ans)
           {
               ans=arrs[i]+mxs[i+k].first;
               ansl=i,ansr=mxs[i+k].second;
           }
       }
       printf("%lld %lld\n",ansl+1,ansr+1);

}
