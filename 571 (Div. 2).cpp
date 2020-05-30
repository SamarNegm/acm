#include<bits/stdc++.h>
using namespace std;
float a[10000008];
long long ans[10000008];
 long long n, l, r, x,sum=0 ;
int main()
{

 long long sum=0;
 cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
for(int i=0;i<=(1<<n);i++)
{
sum=0;
    for(int j=0;j<n;j++)
    {
        if(i&(1<<(j)))
        {
            int q=ceil(a[j]);
            sum+=q;
            ans[j]=q;

        }
    else{
        sum+=floor(a[j]);
        ans[j]=floor(a[j]);
    }
    }
     if(sum==0)
        {
             break;
        }

}
  for(int j=0;j<n;j++)
        cout<<ans[j]<<" ";



    return 0;
}



