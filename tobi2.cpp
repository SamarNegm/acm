#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
 int n,m,t,ans,tp,mn;
 class cmp{
 public:
    bool operator() (int i, int x)
    {
        if(x==100)
            return false;
        if(i==100)
            return true;
        return (i%10<x%10);
    }
 };
int main()
{
    scanf("%d %d",&n,&m);
    priority_queue<int,vector<int>,cmp>pq;
   for(int i=0;i<n;++i)
   {
       scanf("%d",&t);
       pq.push(t);

   }
    while(m&&pq.top()!=100)
    {
        tp=pq.top();
         pq.pop();
           mn=min(m,10-(tp%10));
           pq.push(tp+mn);
           m-=mn;


    }
    while(!pq.empty())
    {
        ans+=pq.top()/10;
        pq.pop();
    }
    printf("%d\n",ans);
}
