#include<bits/stdc++.h>
using namespace std;
#define ll  long long
 vector<ll> ret;
void getDivisors(ll n){
  for(int i=1; i*i<=n; i++){
    if(n % i == 0){
      ret.push_back(i);
      if(n != i * i)
        ret.push_back(n / i);
    }
  }
}


int main()
{
    int a,b,t,l,r,l2;
    cin>>a>>b;
 getDivisors(__gcd(a,b));
 sort(ret.begin(),ret.end());
 cin>>t;
 for(int i=0;i<t;i++)
 {
     cin>>l>>r;
     int l2=lower_bound(ret.begin(),ret.end(),r)-ret.begin();
     if(ret[l2]<=r&&ret[l2]>=l){
     cout<<ret[l2]<<"\n";
     }
     else if(ret[max(0,l2-1)]>=l)
        cout<<ret[max(0,l2-1)]<<"\n";
     else
        cout<<"-1\n";
 }


    return 0;
}
