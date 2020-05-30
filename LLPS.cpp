#include<iostream>
using namespace std;
int main()
{
    string x,ans="";
    cin>>x;
    int m=0;
    for(int i=0;i<x.length();i++)
        if((int)x[i]>m)
        m=(int)x[i];
    for(int i=0;i<x.length();i++)
        if((int)x[i]==m)
        ans+=x[i];
    cout<<ans;



    return 0;
}
