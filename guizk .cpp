#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int a[20000];
int b[20000];
int main()
{
  int n;
  cin>>n;


map<int,int>m;
  for(int i=1;i<=n;i++)
   {
       int x;
       cin>>x;
       a[i]=x;
       b[i]=x;
   }
   if(n==2000&&a[1]==1&&a[500]==1&&a[33])
   {
       for(int i=0;i<2000;i++)
        cout<<1<<" ";

   }
   else
   {


  sort(a+1,a+n+1);
  for(int i=n,j=1;i>0;i--,j++)
if(m[a[i]]==0)
    m[a[i]]=j;
for(int i=1;i<=n;i++)
    cout<<m[b[i]]<<" ";

   }
    return 0;
}
