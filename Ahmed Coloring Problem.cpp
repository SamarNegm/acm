#include<bits/stdc++.h>

using namespace std;
int a[100005],b[100005];
long long ans;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        int j=0;
  for(int i=0;i<n;i++)
  {
      if(a[i]>=b[j])
      {
          ans+=(a[i]-b[j]);
          j++;

      }
  }
    cout<<ans;
}
