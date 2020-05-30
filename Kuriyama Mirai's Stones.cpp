#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000005];
long long b[10000005];
long long sum[100005];
int main()
{

    long long x,i=1;
    cin>>x;
    int n=x;
    while(x--)
    {
        int c;
        cin>>c;
        a[i]=c;
        sum[i]+=(c+sum[i-1]);
       b[i++]=c;
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
    {
        b[i]+=b[i-1];
    }
 int t;
 cin>>t;
 while(t--)
 {
     long long st,l,r;
     cin>>st>>l>>r;
     if(st==2)
     {
cout<<b[r]-b[l-1]<<"\n";
     }
     else{
cout<<sum[r]-sum[l-1]<<endl;

     }
 }



    return 0;
}
