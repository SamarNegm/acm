
#include <bits/stdc++.h>

using namespace std;

#define neig(u, e, v) for(int e = head[u], v ; v = to[e], ~e ; e = nxt[e])


const int N = 1e4 + 5, M = 4e4 + 5, OO = 0x3f3f3f3f;

int ne, head[N], nxt[M], to[M];
int vis[N], vid;
int n, m, a, b;

void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	head[f] = ne++;
}

void addBiEdge(int a, int b){
	addEdge(a, b);
	addEdge(b, a);
}

void init(){
	memset(head, -1, n*sizeof head[0]);
	ne = 0;
}

int DFS(int u){
	if(vis[u])	return 0;
	vis[u] = 1;
	int ret = 1;
	neig(u, e, v){
	 //   cout<<"RET IN "<<ret<<" "<<v<<" "<<e<<"\n";
		ret += DFS(v);

	}
	 // cout<<"RET out "<<ret<<"\n";
	return ret;
}

int main(){
	scanf("%d %d", &n, &m);
	init();
	while(m--){
		scanf("%d %d", &a, &b);
		addBiEdge(--a, --b);
	}
	puts(ne>>1 != n-1 || DFS(0) != n ? "NO" : "YES");
	return 0;
}
