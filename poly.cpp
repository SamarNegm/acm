#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,k,enc="",dec="";
    cin>>s>>k;
    for(int i=0;i<s.length();i++)
    {
        enc+=(char)(((s[i]-'a')+(k[i%k.length()]-'0'))%26+'a');
    }

cout<<enc<<"\n";
s=enc;
   for(int i=0;i<s.length();i++)
    {
        dec+=(char)(((s[i]-'a')-(k[i%k.length()]-'0')+26)%26+'a');
    }
    cout<<dec<<"\n";
    return 0;
}
