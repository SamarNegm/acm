#include<iostream>
#include<algorithm>
using namespace std;
int c[1000];
int main()
{
    int x,sum=0,k;
    string s;
    cin>>x>>k;

    while(x--)
    {
        cin>>s;
        bool f=1;
        for(int i=0;i<s.length();i++)
                ++c[s[i]-'0'];

          for(int j=0;j<=k;j++)
            if(!c[j])
            f=0;
            if(f)sum++;
         for(int i=0;i<100;i++)
            c[i]=0;
    }
    cout<<sum;
    return 0;
}
