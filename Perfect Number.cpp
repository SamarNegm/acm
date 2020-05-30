#include<iostream>
using namespace std;
int a[100005];
int main()
{
   int x,ans=0,j=1;;
   cin>>x;
for(int i=1;i<=10000000;i++){

  long long z=i*10+(10-i);
  long long x=z,ans=0;
    bool f=0;
  while(z)
  {


ans+=z%10;
      z/=10;

  }
  if(ans==10)
   a[j++]=x;
}
cout<<a[x];



    return 0;
}
