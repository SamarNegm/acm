
#include<bits/stdc++.h>
int ans[1000000];


using namespace std;
int main()
{
int x;
scanf("%d",&x);
for(int i=0;i<x;i++)
    scanf("%d",&ans[i]);
    sort(ans,ans+x);
    reverse(ans,ans+x);
for(int i=0;i<x;i++)
    if(ans[i]+ans[i+1]>ans[i+2]&&ans[i+2]+ans[i]>ans[i+1]&&ans[i+1]+ans[i+2]>ans[i]){
        cout<<"YES";
    return 0;}


        cout<<"NO";

	cout<<"\n";
	return 0;
}
