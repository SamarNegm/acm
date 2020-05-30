#include<iostream>
#include<cmath>
using namespace std;
int a[200009];
int main()
{
    long long n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ans+=abs(a[i]-a[i-1]);

    }
    cout<<ans;



    return 0;
}
