#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
long long n,x,k;
long long arr[N];

int main()
{
scanf("%lld %lld %lld",&n,&x,&k);

for(int i=0;i<n;++i)
    {
        scanf("%lld",arr+i);
    }
    sort(arr,arr+n);
    long long mn,mx;
    long long ans=0;


   for(int i=0;i<n;++i)
    {
     mn=ceil(arr[i]*1.0/x)*x;
        mn+=x*(k-1);
        mx=mn+x;
        ans+=lower_bound(arr,arr+n,mx)-lower_bound(arr,arr+n,max(mn,arr[i]));

    }

    printf("%I64d\n",ans);
}
