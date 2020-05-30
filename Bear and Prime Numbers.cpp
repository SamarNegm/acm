#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long n,a[100005],l,r,t,b[20000005];
const int N = 1e7;
bool f[N + 5];
int fun[N];
vector<int> primes;
void seive(){
  f[0] = f[1] = 1;
  for(int i=1; i<=N; i++){
    if(f[i])
      continue;
    primes.push_back(i);
    for(ll j=(ll)i*i; j<=N; j+=i)
      f[j] = 1;
  }
}
void fuN()
{
   seive();
   cout<<primes.size();
}
  vector<ll> fac;
vector<ll> getFactors(ll n){

  ll tmp = n, cnt = 1;
  for(ll i=2; i*i<=n; i++){
    ll x = 1;
    while(tmp % i == 0){
      fac.push_back(i);
      cout<<i<<"\n";
      tmp /= i;
      ++x;
    }
    cnt *= x;
  }
  if(tmp != 1){
    fac.push_back(tmp);
    cnt *= 2;
  }
  return fac;
}
long long solve(int l,int r)
{

}

int main()
{

int j;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>j;
        b[j]++;
    }
    cin>>t;
    seive();
    for(int j=1;j<=primes.size();j++){
        ans[j]=ans[j-1]
        for(int i=p[j];i<N;i+=j)
        ans[j]+=b[i];
    }
    for(int i=0;i<t;i++)
    {
        cin>>l>>r;
        cout<<solve(n,r);
    }



    return 0;
}
