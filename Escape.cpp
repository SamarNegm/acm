#include<bits/stdc++.h>
using namespace std;
int main()
{
    float vd,vp,t,f,c,p,ans=0,m=0;

    cin>>vp>>vd>>t>>f>>c;
    if(vd<=vp){
		cout<<0;
		return 0;
	}
   p=t*vp;
   while(p<c)
   { //cout<<m<<" "<<p<<"\n";
       t=(p)/(vd-vp);
       if(t<0)
       {
           break;
       }
       p+=vp*t;

          if(p<c)
          ans++;
          p+=f*vp+t*vp;




   }
    cout<<ans;

    return 0;
}
