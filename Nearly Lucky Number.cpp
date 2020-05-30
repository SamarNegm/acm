#include<iostream>
using namespace std;
int main()
{
    long long n,ans=0;
    cin>>n;
    while (n)
    {
        if(n%10==4)
        {
            ans++;
        }
        else if(n%10==7)
        {
            ans++;
        }

        n/=10;

    }
    if(ans==4||ans==7)
        cout<<"YES\n";
    else
        cout<<"NO";
}
