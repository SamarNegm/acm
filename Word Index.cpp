#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    string s="a";int j=1;

    for(int i=1;i< 80;i++)
    {
    m[s]=i;
    if(s[s.length()-1]=='z')
    {
        for(int i=0;i<j;i++)
        s=s+(char)('a'+j);
        j++;
    }
    else
    {
        string tmp="";
        for(int i=0;i<s.length()-1;i++)
            tmp+=s[i];
        s=tmp+(char)(s[s.length()-1]+1);
    }
    cout<<s<<"\n";
    }
    while(cin>>s)
    {
       cout<<m[s];
    }





    return 0;
}
