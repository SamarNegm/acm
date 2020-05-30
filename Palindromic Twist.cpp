#include<iostream>
#include<algorithm>
using namespace std;

int q;
bool is_pal(string s)
{
    int x=s.length();
    for(int i=0; i<s.length()/2; i++)
    {
        if(!((abs(s[i]-s[q-i-1])==0||abs(s[i]-s[q-i-1])==2)))

                                return false;
                            }
    return true;
}

int main()
{

    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>q;
        cin>>s;
        cout<<(is_pal(s)?"YES\n":"NO\n");
    }




    return 0;
}
