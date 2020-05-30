#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,ans=0;
    cin>>x;
    cin.ignore();
    while(x--)
    {
        ans=0;
    int a[26]= {0};
        int b[26]= {0};
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        for(int i=0;i<s1.length()||i<s2.length();i++)
        {
            if(i<s1.length())
            a[s1[i]-'a']++;
            if(i<s2.length())
           b[s2[i]-'a']++;

        }
        for(int i=0;i<26;i++)
        {

            ans+=((a[i]>b[i])?a[i]-b[i]:b[i]-a[i]);

        }
        cout<<ans<<"\n";
    }

    return 0;
}
