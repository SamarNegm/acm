#include<iostream>
using namespace std;
bool isv(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y')
        return true;
    else
        return false;
}
int main()
{
    int x;
    cin>>x;

    string s,ans="";
    cin>>s;
    ans+=s[0];
    for(int i=1;i<s.length();i++)
    {
        if(isv(s[i])&&isv(s[i-1]))
            continue;
        else
            ans+=s[i];
    }

cout<<ans;


    return 0;
}
