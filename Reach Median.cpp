#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long a[200000];
long long ans;
int main()

{
    long long n,s;
    cin>>n>>s;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n/2+1; i<n&&a[i]<s; i++)
        ans+=s-a[i];
    for(int i=n/2-1; i>=0&&a[i]>s; i--)
        ans+=a[i]-s;

    cout<<ans+abs(s-a[n/2]);
    return 0;
}
