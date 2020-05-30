#include<iostream>
#define ll long long
using namespace std;
ll newAans(ll ans)
{
    ll a=0;
    while(ans)
    {
        a+=ans%10;
        ans/=10;
    }
    return a;
}

int main()
{
  string n;
  cin>>n;
  if(n.length()==1)
  {
      cout<<0;
      return 0;
  }
  else
  {
ll    ans=0,a=0;
      for(ll i=0;i<n.length();i++)
      {
          ans+=(n[i]-'0');

      }

      while(true)
      {
          if(ans%10==ans)
          {
              cout<<++a;
              return 0;
          }
          else
          {
              a++;
              ans=newAans(ans);

          }
      }
  }

}
