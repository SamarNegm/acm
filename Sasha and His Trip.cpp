#include<iostream>
using namespace std;
long long ans,t=0;
int main()
{
int n,u;
cin>>n>>u;
if(u>n-1)
{
    cout<<n-1;
    return 0;
}
t=n-u,ans+=u;
cout<<((t*(t+1))/2)-1+ans;
    return 0;
}
