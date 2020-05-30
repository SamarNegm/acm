#include<iostream>
#include<algorithm>
using namespace std;
int a[1000001];
int main()
{
int n,l,r,q;
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        int f=lower_bound(a,a+n,l)-a;
        int e=upper_bound(a,a+n,r)-a;
    cout<<e-f<<endl;;
    }
return 0;
}
