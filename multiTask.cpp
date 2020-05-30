
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d\n", m*(m - 1) / 2);
	for (int i = 0; i < m-1; ++i)
	{
		for (int x = i+1; x < m; x++)
		{
			if(k)
			printf("%d %d\n", x + 1, i   + 1);
			else
			printf("%d %d\n", i+1, x+1);
		}
	}


}
