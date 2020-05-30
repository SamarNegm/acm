#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,r,t,p=1;

    cin>>m>>n>>r>>t;
    map<pair<long long ,long long>,bool>mm;
    vector<pair<long long,long long> >v;
    for(int i=0; i<r; i++)
    {
        long long c,b;
        cin>>c>>b;
        v.push_back(make_pair(c,b));
        mm[make_pair(c,b)]=1;

    }
    string s[3]= {"Grapes","Carrots","Kiwis"};
    sort(v.begin(),v.end());

    for(int i=0; i<t; i++)
    {
        long long c,b;
        cin>>c>>b;
        if(mm[make_pair(c,b)])
            cout<<"Waste\n";
        else{

      long long xx= upper_bound(v.begin(),v.end(),make_pair(c,b))-v.begin();
     // cout<<xx<<" "<<(c-1)*n+b-xx<<"\n";
      cout<<s[((c-1)*n+b-xx)%3]<<"\n";
        }

    }
   // cout<<v[0].first<<" "<<v[0].second;



    return 0;
}
