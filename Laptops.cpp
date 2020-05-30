#include<iostream>
using namespace std;
int aa[1000000];

int main()
{
    int n,mx=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        aa[a]=b;
        if(a>mx)
            mx=a;

    }
    for(int i=1;i<=mx;i++)
    {
        if(aa[i]<aa[i-1]&&aa[i])
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";


    return 0;
}
