#include<iostream>
using namespace std;
int a[10000];
int main()
{

    int x;
    cin>>x;
    long long sum=0;
  for(int i=0;i<x;i++)
  {
      cin>>a[i];
      sum+=a[i];
  }
  int ans=0;
  for(int i=0;i<x;i++)
  {
      if((sum-a[i])%2==0)
        ans++;
  }
    cout<<ans;


    return 0;
}
