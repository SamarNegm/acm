#include<iostream>
using namespace std;
long long mad(int x)
{
    long long ans=1;
    for(long long i=1;i<=x;i++)
        ans*=i;
    return ans;
}
long long comb(int x,int i)
{
    return mad(x)/(mad(i)*mad(x-i));
}
long long sum,sum2=1;
int main()
{
    int n;
    cin>>n;
    //if(n)
    for(int i=2;i<=n;i++){
        long long bast=1,makam=1,b=max(i,n-i);
        for(int j=n;j>b;j--)
            bast*=j;
        sum+=bast/mad(min(i,n-i));
    }

    cout<<sum;

    return 0;
}
