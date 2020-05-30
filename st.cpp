#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="abcdefghijklmnopqrstuvwxyz";;
    cin>>s;
    int f,cnt=0,j=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]-'a'<=cnt)
        {
            s[i]=s1[j];
            j++;
            cnt++;
        }
        if(cnt==26)
        {
            cout<<s;
            return 0;
        }




    }
 cout<<-1;

    return 0;
}
