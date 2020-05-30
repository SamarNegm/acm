#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{

	ll n;
	scanf("%lld",&n);
	map<ll,ll>mp1;
	map<ll,ll>mp2;
	map<pair<ll,ll>,ll>se;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		ll x,y;
		scanf("%lld%lld",&x,&y);
		//if(se.count(make_pair(x,y))==0)
		ans+=mp1[x]+mp2[y]-se[(make_pair(x,y))];
			mp1[x]++;
			mp2[y]++;

		cout<<se[(make_pair(x,y))]++<<" "<<ans<<endl;



	}
	cout<<ans<<endl;






	return 0;
}
//يلا مش مهم^^
