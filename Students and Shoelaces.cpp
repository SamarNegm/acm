#include<bits/stdc++.h>
using namespace std;
vector<set<int> >s(100000);

int a,b;
int main()
{

    int n,m,ans=0;
    cin>>n>>m;
    if(m==0)
    {
        cout<<0;
        return 0;
    }
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        s[a].insert(b);
        s[b].insert(a);

    }

    while(true)
    {
        vector<int>v;
        for(int i=1; i<=n; i++)
        {
            if(s[i].size()==1)
            {
                v.push_back(i);

            }

        }


        for(int i=0; i<v.size(); i++ )
        {
            set<int> :: iterator it=s[v[i]].begin();
          //  cout<<*it<<"  "<<"\n";
            s[v[i]].clear();
            s[*it].erase(v[i]);


        }
     //   cout<<v.size()<<"  size2\n";
        if(v.size()!=0)
            ans++;
        else
            break;

    }
    cout<<ans;



    return 0;
}
