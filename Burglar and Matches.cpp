#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{

    int n,m;
    cin>>n>>m;
    vector<pair<int,int> >v(m);
   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
     v[i]=make_pair(b,a);

   }
 sort(v.begin(),v.end());
 long long i=m-1,ans=0;



while(true)
{
    if(i<0)
        break;
    if(v[i].second<=n)
    {
        ans+=v[i].first*v[i].second;
        n-=v[i--].second;

    }
    else
    {
        ans+=n*v[i].first;
        break;
    }
}

 cout<<ans;

    return 0;
}
