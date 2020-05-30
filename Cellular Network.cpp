#include<iostream>
#include<algorithm>
using namespace std;
int a[100005],b[100005],x,ans;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
      for(int i=0;i<m;i++)
        cin>>b[i];
        for(int i=0,j=0;i<n;i++)
        {
               int l = upper_bound(b , b+m , a[i])- b ;
              if(l==m)
                l=m-1;

              if(l>0)
            x=min(abs(b[l]-a[i]),abs(a[i]-b[l-1]));
            else
                x=abs(b[l]-a[i]);
            ans=max(ans,x);
        }
    cout<<ans;



    return 0;
}
