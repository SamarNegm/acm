#include<iostream>
using namespace std;
int main()
{
    int n;
    string s="ROY",s2="GBIV",ans="";
    cin>>n;
    n-=3;
    ans+=s;
    for(int i=0,j=0;i<n;i++,j++)
    {

        if(j==4)
            j=0;

              ans+=s2[j];

    }
    cout<<ans;
}
