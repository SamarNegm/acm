#include<bits/stdc++.h>
using namespace std;
long long pw(int x,int y)
{

    if(x<=0)
        return 1;
    long long q=y;
    x--;
    while(x--)
        y*=q;
    return y;

}
int main()
{
    double k,d,sum=0;
    int n;
    cin>>n>>k>>d;
    int q=n;
    if(k>=n)
{
    for(int j=1;j<=d;j++){
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    cout<<"\n";
    }
    return 0;
}
    if(k!=1)
    while(q)
    {
      sum++;
        q/=k;
    }
       int k2=k;
if(n>pw(max(d,k),min(d,k)))
{
    cout<<"-1";
    return 0;
}
    long long  j=1;
    int c=0;

    for(int i=1;i<=d;i++)
    {
        for(int q=1;q<=n;q++)
            for(int z=1;z<=j;z++,c++)
        {
            if(c>=n)
                break;

            cout<<(q%(k2)!=0?(q%k2):k2)<<" ";
        }
        cout<<"\n";
c=0;
        if(j*k2<=n)j*=k2;


    }



    return 0;
}
