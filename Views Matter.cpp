#include<bits/stdc++.h>
using namespace std;
int ans,j,maxc;
long long sum,x;
vector<int>a;
int main()
{
    int n,m,z;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>z;
        a.push_back(z);
        if(z>maxc)
        {
            maxc=z;
            j=i;
        }
        sum+=z;
    }
    sort(a.begin(),a.end());
    for(int i=n-1;i>0;i--){
        x+=a[i]-a[i-1];
        if(a[i]==a[i-1]&&a[i]==1)
            x++;
    }

x++;
if(x==1)
    x=max(maxc,n);

cout<<x<<"\n";
    cout<<(sum-x)<<"\n";



    return 0;
}
