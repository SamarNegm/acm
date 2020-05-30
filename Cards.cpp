#include<iostream>
#include<algorithm>
int a[105],idx[105],b[105];
bool cpm(int s,int f)
{
    if(b[s]>b[f])
        return true;
        return false;
}

using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        a[i]=i;
    for(int i=1;i<=n;i++)
        cin>>b[i];
    sort(a+1,a+n+1,cpm);
    for(int i=1;i<=n/2;i++)
        cout<<a[i]<<" "<<a[n-i+1]<<endl;

    return 0;
}
