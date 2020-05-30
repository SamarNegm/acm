#include<bits/stdc++.h>
using namespace std;
int y[3000];
int x[3000];
pair<int,int>p;
pair<int,int>p2;
int main()
{
    int t,a,b;
    cin>>a>>b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x[i]>>y[i];
    }
    sort(x,x+t);
    sort(y,y+t);

for(int i=0;i<t-1;i++)
{
    if(abs(x[i+1]-x[i])>p.first)
    {
        p.first=x[i+1]-x[i];
        p.second=x[i];
        cout<<p.first<<" "<<p.second<<" "<<x[i]<<"\n";
    }
    if(y[i+1]-y[i]>p2.first)
    {
        p2.first=y[i+1]-y[i];
        p2.second=y[i];
        cout<<p2.first<<" "<<p2.second<<" "<<x[i]<<"\n\n";
    }
}
  cout<<b<<" "<<p2.first/2+p2.second<<" "<<p.second<<"  "<<p2.second ;

    return 0;
}
