#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
int main()
{


  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i+=2)
    cout<<a[i]<<" ";
for(int j=n-(1+n%2),i=1;j>(1-n%2);j-=2,i+=2)
cout<<a[j]<<" ";
if(n%2==0)
    cout<<a[1];


    return 0;
}
