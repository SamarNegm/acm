#include<iostream>
using namespace std;
int a[1000000];
int main()
{
    int n,k;
    cin>>n>>k;
  int ans=1,l=n-k-1;
  cout<<ans<<" ";
  while(k)
  {
      ans+=k;
      cout<<ans<<" ";
      k--;
      if(k==0)
        break;
      ans-=k;
      cout<<ans<<" ";
      k--;
  }
  ans=n;
  while(l)
  {

      cout<<ans<<" hna ";
      l--;
      --ans;
      if(l<1)
        break;


  }


    return 0;
}
