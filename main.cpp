#include<iostream>
using namespace std;
int ans[105];
int main()
{
int n,a,b;
cin>>n;
for(int i=1;i<=n;i++)
{
    int x;
    cin>>x;
    ans[i]+=ans[i-1]+x;
}
cin>>a>>b;
cout<<min(ans[max(a,b)-1]-ans[min(a,b)-1],ans[n]+ans[min(a,b)-1]-ans[max(a,b)-1]);


    return 0;
}
