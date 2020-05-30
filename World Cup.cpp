#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,x,ans=0;
scanf("%d",&x);
scanf("%d",&a);
scanf("%d",&b);
//if(a%2==0&&b%2==0)


if(min(a,b)<=x/2&&max(b,a)>x/2)
    cout<<"Final!";

else
   {
       a--,b--;
       while(a!=b)
       {
          // cout<<a<<" "<<b<<endl;
           a=a/2;
           b/=2;
           ans++;

       }
       cout<<ans;
   }

    return 0;
}
