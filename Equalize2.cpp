#include<bits/stdc++.h>
using namespace std;
int n,ans;
string s,s2;
int main()
{
   cin>>n>>s>>s2;
    for(int i=n-1;i>=0;i--)
        if(s[i]!=s2[i])
    {
        if(s2[i-1]==s[i])
            swap(s[i-1],s[i]);
        ans+=1;
    }
    cout<<ans;

    return 0;
}
