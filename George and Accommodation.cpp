#include<iostream>
using namespace std;
int main()
{
    int x,a,b,ans=0;
    cin>>x;
    while(x--)
    {
        cin>>a>>b;
        if(b-a>=2)
            ans++;
    }
    cout<<ans;


    return 0;
}
