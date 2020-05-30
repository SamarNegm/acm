#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,x,y,l,r;
	a=b=0;
	int n,ans=1;
	cin>>n;
	while(n--){
		cin>>x>>y;
		r=min(x,y),l=max(a,b);
		if(min(a,b)==l) l+=1;
		ans+=max(0,r-l+1);
		a=x,b=y;
	}
	cout<<ans<<"\n";
	return 0;
}
