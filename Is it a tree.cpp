#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int a[N],ed;
vector<int> adj[N];
int p[N];
int n, m,en;
bool vis[100901];

void bfs(int u) {
	queue<int> s;
	vis[u] = 1;
	s.push(u);

	while (!s.empty()) {
		int v = s.front();
		s.pop();

		for (int i = 0; i < adj[v].size(); i++)
			if (!vis[adj[v][i]]) {
				vis[adj[v][i]] = 1;
				s.push(adj[v][i]);
			}
		en++;
	}
}

int main(){
    int n , m ,b;
    cin>>n>>m;
if(m!=n-1)
{
    cout<<"NO";
    return 0;
}
    for(int i = 0; i < m; ++i){
        int u , v ;
        cin>>u>>v;
       if(i==1)  b=u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(b);
    cout<<(en!=n?"NO":"YES");
}
