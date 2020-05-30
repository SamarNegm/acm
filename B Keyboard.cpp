#include<bits/stdc++.h>
using namespace std;
int ans=0,x;
int bch[27];
map<int,vector< pair<int,int> > >ch;
vector<pair<int,int> >shift;
int dis(int i, int j, int x1, int x2)
{

    return (i - x1)*(i - x1) + (j - x2)*(j - x2);
}
bool ok(char c)
{
    for(int i=0; i<ch[c].size(); i++)
        for(int j=0; j<shift.size(); j++)
        {
            if(dis(ch[c][i].first,ch[c][i].second,shift[j].first,shift[j].second)<=x*x)
            {
                bch[c-'a']=1;
                return true;
            }
        }

    bch[c-'a']=0;
    return false;
}
int main()
{
    memset(bch,-1,110);
    int n,m;
    cin>>n>>m>>x;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int j=0; j<s.length(); j++)
            if(s[j]=='S')
                shift.push_back({i,j});
            else
            {
                ch[s[j]].push_back({i,j});
            }

    }
    int k;
    cin>>k;
    cin>>s;

    for(int i=0; i<k; i++)
    {
        if(ch[tolower(s[i])].empty())
        {
            cout<<-1;
            return 0;
        }
        if(s[i]>='A'&&s[i]<='Z'&&shift.empty())
        {
            cout<<-1;
            return 0;
        }

        else if(s[i]>='A'&&s[i]<='Z')
        {
            if(bch[tolower(s[i])-'a']==0){
                ans++;
         }
            else if(!ok(tolower(s[i]))){
                ans++;
           }
        }
    }
    cout<<ans;



    return 0;
}
