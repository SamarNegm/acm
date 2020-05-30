#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long l,r;
long long pw(int x,int y)
{
    long long ans=1;
    while (x--)
    {
        ans*=y;
    }
    return ans;
}
int main()
{

      scanf("%lld %lld",&l,&r);
      if(l==r)
        cout<<0;
      else{
      int ans=0;
      for(int i=63;i>-1;--i)
      {

          if((l>>i)!=(r>>i))
          {
              ans=i;
              break;
          }
      }
      ans++;

       cout<<pw(ans,2)-1;
      }
}
