#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,k,ans=0;
    cin>>x>>k;

    while(x--)
    {
        int a,b;
        cin>>a>>b;
        ans+=abs(a-b)+1;
    }
int    ans2=0;
    while(true)
    {
        if(ans%k==0)
        {
            cout<<ans2;
            break;
        }
        else{
            ans2++;
        ans++;}
    }

}
