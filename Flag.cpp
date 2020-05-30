#include<iostream>
using namespace std;
int r[1000];
string s[10000];
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {

        cin>>s[i];
             if(s[i][0]==s[i-1][0])
            {
                cout<<"NO";
                return 0;
            }

        for(int j=1; j<s[i].length(); j++)

            {

                if(s[i][j]!=s[i][0])
                {
                    cout<<"NO";
                    return 0;
                }
            }

    }
    cout<<"YES";


    return 0;
}
