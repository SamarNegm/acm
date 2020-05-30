#include<bits/stdc++.h>
using namespace std;
int a[20005];
int mx;
int main()
{
    int n,x,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int ans=0;
      int tm=i;
        while(a[tm]!=-1)
        {
            tm=a[tm];
            ans++;
        }
        mx=max(mx,ans);
    }
    cout<<mx+1;




    return 0;
}
