#include <bits/stdc++.h>

using namespace std;

long long n,c,a[10000000],ans,b[10000000];pair<long long ,long long > ans2;
int main()
{
 // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

scanf("%lld %lld",&n,&c);
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
long long l=0,h=n,mid=0;
while(l<h)
{
ans=0;

    mid=(l+h+1)/2;

    for(long long i=1;i<=n;i++)
    {
        b[i]=a[i]+mid*i;
}
    sort(b+1,b+n+1);
    for(long long i=1;i<=mid;i++)
   ans+=b[i];

   if((mid>ans2.second||(ans==ans2.first&&ans2.second<mid))&&ans<=c)
   {
       ans2.second=mid;
       ans2.first=ans;
   }

    if(ans>=c)
        h=mid-1;

    else
        l=mid;


}


cout<<ans2.second<<" ";

cout<<ans2.first;




    return 0;

}
//يلا مش مهم^^
