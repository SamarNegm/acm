#include<iostream>
using namespace std;
int main()
{


    int x;
    cin>>x;
    int ans=0;

    while(x)
    {
       ans+=x%2;
       x/=2;

    }
cout<<ans;


    return 0;
}
