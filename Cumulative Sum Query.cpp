#include<iostream>
using namespace std;
int main()
{

    int x,i=0;
    cin>>x;
    int a[x];
    while(x--)
        cin>>a[i++];
    int t;
    cin>>t;
    while(t--)
    {
        int f,l;
        long long sum=0;
        cin>>f>>l;
        for(int j=f;j<=l;j++)
            sum+=a[j];
            cout<<sum<<"\n";
    }




    return 0;
}
