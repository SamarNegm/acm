#include<bits/stdc++.h>
using namespace std;
vector<long long >v;
map<long long,vector<long long> >m;
int main()
{

    long long n,a,b,temp,l,p,l2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;

       v.push_back(a);
       v.push_back(b);
       m[a].push_back(b);
       m[b].push_back(a);

    }

    for(int i=0;i<v.size();i++)
    {
        if(m[v[i]].size()==1)
            l=v[i];
    }
      cout<<l<<" ";
  temp=m[l][0];
  p=l;
    cout<<temp<<" ";

    while(m[temp].size()!=1)
    {

long long x=temp;
        temp=(m[temp][0]!=p?m[temp][0]:m[temp][1]);
p=x;
cout<<temp<< " ";

    }


    return 0;
}
