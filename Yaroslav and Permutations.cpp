#include<iostream>
using namespace std;
int a[1000000];
int main()
{

    int n,b,mx=0,mx2=0;
    cin>>n;
    while(n--)
    {
    int x;
    cin>>x;
    if(x>mx)
    mx=x;
    a[x]++;
    if(a[x]>mx2){
        mx2=a[x];
        b=x;
    }
    }
    int ans=0;
    for(int i=0;i<=mx;i++)
    {
        if(i!=b)
       // cout<<a[i]<<endl;
        ans+=a[i];

    }

    cout<<(ans+1>=mx2?"YES":"NO");





    return 0;
}
