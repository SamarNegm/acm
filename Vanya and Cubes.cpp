#include<iostream>
int a[1000000],sum[100000];
using namespace std;
int main()
{
    int x,i=1,ans=0,j=1;
    a[0]=0;

    cin>>x;
    while (1==1)
    {
        a[i]=i+a[i-1];

        sum[j]+=a[i]+sum[j-1];
        if(sum[j]<=x)
        {
            ans++;
            j++;
        }
        else
            break;

i++;
    }
    cout<<ans;


    return 0;
}
