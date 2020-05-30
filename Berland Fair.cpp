#include<bits/stdc++.h>
using namespace std;
long long a[2000000],ans;
int main()
{
    long long n,t,x=0,m=1e18;
    long long sum=0;
    scanf("%lld%lld",&n,&t);
    for(long long i=0; i<n; i++)
    {
        scanf("%lld",a+i);

    }
    while(true)
    {
        sum=0,x=0;
        for(long long i=0; i<n; i++)
            if(a[i]<=t)
            {
                sum+=a[i],x++;
                t-=a[i];
            }
        if(x==0)
            break;
        ans+=(x*(t/sum));
        ans+=x;
          t%=sum;

    }

    cout<<ans;

    return 0;
}
