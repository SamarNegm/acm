
#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long m,ans,n,t,sum2;
int q[11];


int main()
{
 cin>>t;
 for(int i=0;i<t;i++)
 {
 long long sum=0;
     cin>>n>>m;
ans=0;
  for(long long j=0;j<10;j++){

   q[j]=(j*m)%10;
sum+=q[j];
   }
int x=0;
  ans=((long long)(n/(long long)(m*10)));
  for(int i=0;i<=n-(ans*(m*10));i++){

   if(i*m>n-(ans*m*10))
        break;
    x+=q[i%10];

 }
 cout<<ans*sum+x<<"\n";
 }
  return 0;
}
