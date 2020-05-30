#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >a,b;
int c[1000000];
int q[1000000];
int ans[1000000];
int main()
{
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>c[i];
        a[c[i]].push_back(i);
    }
    for(int i=0; i<m; i++)
    {
        cin>>q[i];
        if(a[q[i]].size()>0)
        {


        }
    }

    for(int i=0; i<m; i++)
    {

        cout<<c[i]<<" ";
    }

    return 0;
}
