#include<bits/stdc++.h>
using namespace std;
char map1[50][50] = {0};
char path[50][50]={0};
int n,m;
void dfs(int x0, int y0, int x,int y)
{
	if(map1[x0][y0]!=map1[x][y])	return;
	if(path[x][y])
	{
		printf("Yes\n");
		exit(0);

	}

	path[x][y]=1;
	if(y-1>=0&&y-1!=y0){cout<<"newi " <<x<<"newj"<<y-1<<"\n";	dfs(x,y,x,y-1);}
	if(x-1>=0&&x-1!=x0){cout<<"newi " <<x-1<<"newj"<<y<<"\n"	;dfs(x,y,x-1,y);}
    if(y+1<m&&y+1!=y0)	{cout<<"newi " <<x<<"newj"<<y+1<<"\n";dfs(x,y,x,y+1);}
	if(x+1<n&&x+1!=x0)	{cout<<"newi " <<x+1<<"newj"<<y<<"\n";dfs(x,y,x+1,y);}



	path[x][y]=0;
}
int main()
{
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%s",map1[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			dfs(i,j,i,j);
		}
	}
	printf("No\n");
	return 0;
}
