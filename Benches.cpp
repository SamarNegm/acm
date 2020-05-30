#include<iostream>
using namespace std;
int x,mx,s;
int main()
{
    int a,b,c;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>x;
       s+=x;
        mx=max(mx,x);
    }
    s+=b;
    cout<<max(mx,s/a+(s%a!=0))<<" "<<b+mx;

    return 0;
}
