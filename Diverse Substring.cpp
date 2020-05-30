#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    if(s.length()>1)
        for(int i=1;i<s.length();i++)
        if(s[i]!=s[i-1])
    {
        cout<<"YES\n";
        cout<<s[i-1]<<s[i]<<"\n";
        return 0;
    }

        cout<<"NO";
       return 0;


}
