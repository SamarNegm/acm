
#include<iostream>
#include<cmath>
#include<set>
using namespace std;

long long poin[100000000];

set <long long>s;
int main()
{
    for (long long i = 2; i <=1000000; ++i)
    {
        cout<<"hi";
        if(poin[i]==0)
        {
            s.insert(i*i);
            poin[i*i]++;
            cout<<i*i<<endl;

        }
        for(long long j=2;j<=i&&i*j<=1000000;j++)
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
