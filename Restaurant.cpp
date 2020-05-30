#include<bits/stdc++.h>
using namespace std;
int a[27],mx;
map<int,int >m;
vector<pair<int,int > >v;
int main()
{
    string s;
    int t;
    cin>>t;
    cin>>s;
    for(int i=0;i<s.length();i++){
     m[s[i]-'a']++;
    }
    for(int i=0;i<27;i++)
    {
        v.push_back(make_pair(m[i],i));

    }

    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>0;i--){
        if(v[i].first==0)
        break;
        cout<<(char)(v[i].second+'a');
    }


    return 0;
}
