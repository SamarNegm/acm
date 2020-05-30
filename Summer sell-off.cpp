#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[10005],b[100005],c[100005];


int main()
{

    long long n,x,ans=0,z=0;
    vector<pair<long long,long long> >v;

    cin>>n>>x;

    for(int i=0; i<n; i++)
    {

        cin>>c[i]>>b[i];
            v.push_back(make_pair(min(c[i]*2,b[i])-min(b[i],c[i]),i));


    }
    // cout<<ans;
    sort(v.begin(),v.end());
    for(int i=n-1,j=0; i>=0; i--,j++)
    {

        if(j<x)
        {
            ans+=min(c[v[i].second]*2,b[v[i].second]);
        }
        else
            ans+=min(c[v[i].second],b[v[i].second]);

    }



    cout<<ans;



    return 0;
}
