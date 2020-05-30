#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main()
{

    int n,q,o=0,e=0,x;
    cin>>n;
    for(int i=0;i<n;i++)

    {
        int ans=0;
        cin>>x;
        for(int j=0;j<x;j++)
            cin>>a[j];
           int q=a[x-1];
        for(int k=x-2;k>=0;k--)
        {
            if(a[k]>q)
                ans++;
            else
                q=a[k];

        }
        cout<<ans<<"\n";
    }



    return 0;
}
