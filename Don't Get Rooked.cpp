#include<bits/stdc++.h>
using namespace std;
int vis[20][20],ans;
int x;
char str[10];
void unsign(int i, int j) {
	vis[i][j] --;
	for(int k = i + 1; k < x; k++) {
		if(vis[k][j] == -1) break;
		vis[k][j] --;
	}
	for(int k = i - 1; k >= 0; k--) {
		if(vis[k][j] == -1) break;
		vis[k][j] --;
	}
	for(int k = j + 1; k < x; k++) {
		if(vis[i][k] == -1) break;
		vis[i][k] --;
	}
	for(int k = j - 1; k >= 0; k--) {
		if(vis[i][k] == -1) break;
		vis[i][k] --;
	}
}
void sign(int i, int j) {
	vis[i][j] ++;
	for(int k = i + 1; k < x; k++) {
		if(vis[k][j] == -1) break;
		vis[k][j] ++;
	}
	for(int k = i - 1; k >= 0; k--) {
		if(vis[k][j] == -1) break;
		vis[k][j] ++;
	}
	for(int k = j + 1; k < x; k++) {
		if(vis[i][k] == -1) break;
		vis[i][k] ++;
	}
	for(int k = j - 1; k >= 0; k--) {
		if(vis[i][k] == -1) break;
		vis[i][k] ++;
	}
}
int ok() {
	for(int i = 0; i < x; i++)
		for(int j = 0; j < x; j++)
			if(vis[i][j] == 0) return 0;
	return 1;
}
void dfs(int add)
{
    if(ok()==1){
        ans=max(add,ans);
    return ;}
    for(int j=0;j<x;j++)
    for(int i=0;i<x;i++){
            if(vis[j][i]==0){
sign(j,i);
dfs(add+1);
unsign(j,i);
    }
    }

}


int main() {
	while(scanf("%d", &x), x) {
		for(int i = 0; i < x; i++) {
			scanf("%s", str);
			for(int j = 0; str[j] != '\0'; j++) {
				if(str[j] == '.') vis[i][j] = 0;
				else vis[i][j] = -1;
			}
		}

		//system("pause");
		ans = 0;
		dfs(0);
		printf("%d\n", ans);
	}
	return 0;
}
