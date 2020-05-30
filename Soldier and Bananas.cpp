
#include<iostream>
using namespace std;
int main()
{
    long long m,n,k,ans=0;
    cin>>k>>m>>n;
    for(int i=1;i<=n;i++)
        ans+=k*i;
        if(ans>m)
    cout<<ans-m;
    else
        cout<<0;




    return 0;
}
