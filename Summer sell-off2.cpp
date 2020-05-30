#include<iostream>
#include<algorithm>
using namespace std;
int a[10005],c[10005],b[100005],k[100005];
bool cpm(long long s,long long f)
{
    if(a[s]<a[f])
        return true;
    return false;
}
int main()
{

    long long n,x,ans=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {

        cin>>c[i]>>b[i];
        a[i]=min(c[i]*2,b[i]);
        k[i]=i;
    }
    sort(a,a+n);

for(int i=0,j=0;i<n;i++,j++)
    cout<<a[k[n-j-1]]<<" "<<c[k[n-j-1]]<<" "<<b[k[n-j-1]]<<" mm\n";
    for(int i=x;i<n;i++ )
        cout<<min(c[i],b[i])<<"\n";
cout<<ans<< " ";


    return 0;
}
