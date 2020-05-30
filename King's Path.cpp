#include<bits/stdc++.h>
using namespace std;
int di[]= {1,-1,0,-1,1,0,-1,1};
int dj[]= {0,0,-1,-1,-1,1,1,1};
map <pair<int,int>,int>m;
queue<pair<int,int> >q;
void BFS(pair <int,int>u)
{
    m[u]=0;
    q.push(u);

    while(q.size())
    {
        u = q.front();
        q.pop();

        for(int i=0; i<8; i++)
        {
            if(m[make_pair(u.first+di[i],u.second+dj[i])] == -1)
            {
                m[make_pair(u.first+di[i],u.second+dj[i])] = m[u] + 1;
                q.push(make_pair(u.first+di[i],u.second+dj[i]));
            }


        }
    }
}
int main()
{
    int   x0,y0,x1,y1,n,r,f,e;
    scanf("%d%d%d%d%d",&x0,&y0,&x1,&y1,&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d%d",&r,&f,&e) ;
        for(int i=f; i<=e; i++)
            m[make_pair(r,i)]=-1;

    }
    m[make_pair(x1,y1)]=-1;

    BFS(make_pair(x0,y0));
    cout<<m[make_pair(x1,y1)];


    return 0;
}
