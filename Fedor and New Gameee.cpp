#include<bits/stdc++.h>
using namespace std;
int a[10000];
int b[10000];
int main()
{
  int m,n,k;
  cin>>m>>n>>k;
  for(int i=0;i<=n;i++)
    cin>>a[i];
  int ans=0;

  for(int i=0;i<n;i++)
  {
      int b=0;
      for(int j=0;j<31;j++)
      {

          if((a[i]&1<<j)&&!(a[n]&1<<j)||(!(a[i]&1<<j)&&(a[n]&1<<j)))
              b++;
      }

      if(b<=k)
        ans++;
  }

cout<<ans;


    return 0;
}
