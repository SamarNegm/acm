#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m=0,p=0,ans=0,i;
    string s;char p0;
    cin>>s;

    for( i=0;i<s.length();i++)
        if(s[i]=='+')
    {
        p++;
        if(m<=0)
            ans++;
        else
            m--;
    }
    else
        {
            m++;
                if(p<=0)
            ans++;
        else
            p--;
        }
    cout<<ans;

    return 0;
}
