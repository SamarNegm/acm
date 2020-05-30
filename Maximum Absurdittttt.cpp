#include<iostream>
#include<cmath>
using namespace std;
long long a[1000001];
long long b[1000001];
int main()
{

    int n,k;
    cin>>n>>k;
    if(n/k==2&&n%k==0&&n!=2)
    {
        cout<<1<<" "<<n/2+1;
    }
    else
    {


long long i=1,j=1,mx=0,idx=0,idx2=0,mx2=0;
    while(n--)
    {
        int x;
        cin>>x;
        a[i]+=x+a[i-1];
        i++;
        if(i>=k+1){
            b[j]=a[i-1]-a[i-k-1];
            if (b[j]>mx){
                mx=b[j];
            idx=j;}
            if(b[i]>mx2&&abs(idx2-idx)>k)
            {
                mx2=b[j];

            }
        j++;}

    }


cout<<idx<<" "<<idx2<<endl;;
    }

}
