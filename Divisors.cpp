#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long m[1000005],q=1;

long long getDivisors(ll n){
  long long sum=0;
  for(int i=1; i*i<=n; i++){
    if(n % i == 0){
      sum+=i;
      if(n != i * i){
            sum+=(n/i);
      }
    }
  }
  return sum;
}

int main()
{
    for(int i=0;i*i<=1000000;i++){
        m[i]=getDivisors(i);

    }
    ll x,c=0;
 long long l,r,k;
 cin>>x>>k;
 for(int i=0;i<x;i++)
 {
     long long ans=0;
     cin>>l>>r;
     for(int j=l;j<=r;j++)
     {

       if(m[j]%k==0)
        ans++;
     }
     cout<<ans<<"\n";
 }
  return 0;
}
