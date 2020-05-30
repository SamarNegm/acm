#include<iostream>
#include<map>
using namespace std;

int main()
{

   long long n,p=0,t=0;
   map<long long,long long>m;
   cin>>n;
   for(int i=1;i<=n;i++){
 int x;
   cin>>x;
m[x]=i;

   }
   int mm;
   cin>>mm;
   for(int i=0;i<mm;i++)
   {
       int x;
       cin>>x;
       p+=m[x];
       t+=(n-m[x]+1);


   }

    cout<<p<<" "<<t;
    return 0;
}
