#include<bits/stdc++.h>
using namespace std;
double p1[10000];
int main()
{

  double x,p=60000,b,a,rr=0,r=0,r2=0;
cin>>x;
  for(int i=0;i<x;i++)
  {
    cin>>rr;
      r=max(r,rr);

  }
cin>>x;
  for(int i=0;i<x;i++)
    cin>>p1[i];
cin>>x;
for(int i=0;i<x;i++)
{
cin>>rr;
    p=min(rr,p);
}
cin>>a>>b;
for(int i=0;p1[i];i++)
{
    r2=max(r2,((b*p1[i]*r*r)/(a*p+p1[i]*b)));
}
    cout<<fixed<<setprecision(12)<<sqrt(r2);



    return 0;
}
