#include<iostream>
using namespace std;
int a[1000000];
int main()
{

    int m,n,l,k,d,ans=0;
    cin>>m>>n>>l>>k>>d;
    for(int i=m;i<=d;i+=m)
        a[i]++;
    for(int i=n;i<=d;i+=n)
        a[i]++;
    for(int i=l;i<=d;i+=l)
    a[i]++;
    for(int i=k;i<=d;i+=k)
        a[i]++;
    for(int i=0;i<=d;i++)
        if(a[i])
        ans++;
    cout<<ans;




    return 0;
}
