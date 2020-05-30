#include<bits/stdc++.h>
using namespace std;
long long c0,c1,ans1,ans0,ans;
int main()
{
    string a,b;
    int n;
    cin>>n;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='0')
            c0++;
        else
            c1++;
    }
    for(int i=0;i<a.length();i++)
    {
        if(b[i]=='0'&&a[i]=='1')
        {
            ans+=c0;
            ans0++;
        }
        else if(b[i]=='0'&&a[i]=='0')
        {
            ans+=c1;
            ans1++;
        }
    }
    cout<<ans-(ans0*ans1);
    return 0;
}
