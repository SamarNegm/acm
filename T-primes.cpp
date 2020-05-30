#include<iostream>
#include<cmath>
#include<set>
using namespace std;
bool isPrime(long long x)
{

    for(int i=2; i*i<=x; i++)
        if(x%i==0)
        {

            return false;
        }
    return true;
}
long long poin[100000000];

set <long long>s;
int main()
{
int k=0;
    for (long long i = 2; i <=1000000; ++i)
    {
        if(poin[i]==0)
        {
            s.insert(i*i);
            poin[i*i]++;

        }
        for(int j=2;j<=i&&i*j<=1000000;j++)
        {
            poin[i*j]++;
        }
    }
    int x;
    cin>>x;
    while(x--)
    {
        long long a;
        cin>>a;
        if(s.find(a)!=s.end())
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }


    return 0;
}
