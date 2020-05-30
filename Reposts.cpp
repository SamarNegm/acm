#include<bits/stdc++.h>
using namespace std;
vector<string>s;
map<string,string>m;
string Tolower(string s)
{
    string x="";
    for(int i=0; i<s.length(); i++)
        x+=tolower(s[i]);
    return x;
}
int main()
{
    int t;
    cin>>t;
    string tmp,x,p
    ;
    for(int i=0; i<t; i++)
    {
        cin>>tmp>>p>>x;
        tmp=Tolower(tmp);
        x=Tolower(x);
        s.push_back(tmp);
        m[tmp]=x;
    }
    int mx=0;
    for(int i=0; i<t; i++)
    {
        int ans=0;
        string tm=s[i];
        while(m[tm]!="")
        {
            tm=m[tm];
            ans++;
        }
        mx=max(mx,ans);
    }
    cout<<mx+1;

    return 0;
}
