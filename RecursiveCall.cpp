#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll n)
{
    if(n < 2)
        return 0;
    for(ll i=2; i*i<=n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

long long getDivisors(ll n)
{
    vector<ll> ret;
    for(int i=1; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            ret.push_back(i);
            if(n != i * i)
                ret.push_back(n / i);
        }
    }
    return ret.size();
}

vector<ll> getFactors(ll n)
{
    vector<ll> ret;
    ll tmp = n, cnt = 1;
    for(ll i=2; i*i<=n; i++)
    {
        ll x = 1;
        while(tmp % i == 0)
        {
            ret.push_back(i);
            tmp /= i;
            ++x;
        }
        cnt *= x;
    }
    if(tmp != 1)
    {
        ret.push_back(tmp);
        cnt *= 2;
    }
    return ret;
}

const int N = 1e6;
bool f[N + 5];
vector<int> primes;

void seive(int n)
{
    f[0] = f[1] = 1;
    for(int i=1; i<=n; i++)
    {
        if(f[i])
            continue;
        primes.push_back(i);
        for(ll j=(ll)i*i; j<=N; j+=i)
            f[j] = 1;
    }
}

ll GCD(ll a, ll b)
{
    return b ? GCD(b, a % b) : a;
}
long long pw(int x)
{
    long long ans=1;
    for(int i=0; i<x; i++)
        ans*=8;
    return ans;

}
ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
}
int vis[100];

long long a[100];
long long ans;
int main()
{
    a[1]=1;
    a[2]=2;
    ll n,c=0,k;
    cin>>n;
    if(n==1)
    {
        cout<<1<<"\n";
        return 0;
    }
    if(n==2)
    {
        cout<<2<<"\n";
        return 0;
    }
    for(int j=3;j<=n;j++){

       a[j]=(a[j-2]+a[j-1]);
      // cout<<a[j]<<"\n";
    }
    cout<<a[n];
    return 0;
}
