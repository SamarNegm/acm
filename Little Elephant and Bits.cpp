#include<iostream>
using namespace std;
int main()
{

    string s;
    cin>>s;
    bool f=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0'&&f)
        {
            f=0;
            continue;
        }
        else
            if(f&&i==s.length()-1)
            break;
        else
            cout<<s[i];
    }



    return 0;
}
