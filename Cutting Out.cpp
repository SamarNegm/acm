#include<bits/stdc++.h>
using namespace std;
const int N=200000;
pair<int,int> p[N+1];
vector<int>ans;
int main()
{
    int n,k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        p[x].first++;
        p[x].second=x;

    }
    sort(p,p+N+1);
    for(int j=0,i=N;j<k;j++,i--)
    {

        if(p[i].first/2>p[i-k+j].first){
        ans.push_back(p[i].second);
           ans.push_back(p[i].second);
           j++;
        }
        else
               ans.push_back((p[i].second));

    }

for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}


    return 0;
}
