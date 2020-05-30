#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long m[1000005],q=1;

long long getDivisors(ll n){
  long long sum=0;
  for(int i=1; i*i<=n; i++){
    if(n % i == 0){
      sum+=i;
      if(n != i * i){
            sum+=(n/i);
      }
    }
  }
  return sum;
}
map<int,bool>ans;
int main()
{

for(int i=0;i*360<=9000;i++){
    int temp=i*360;
  int x=0;
int  t=0;
    while(t<3)
    {
        t++;
        x*=10;
        x+=temp%10;
        temp/=10;

    }
    cout<<i*360<<"\n";
    ans[x]=1;
}
string s;
int t;
cin>>t;
cin>>s;
int w=0;
if(s.length()<=3){
for(int i=0;i<3&&i<s.length();i++)
{
    w*=10;
    w+=(s[i]-'0');

}
if(w<360)
{
    cout<<"No";
    return 0;

}}
int q=0;
for(int j=0,k=s.length()-1;j<3;j++,k--)
{
    q*=10;
    q+=(s[k]-'0');
}
if(ans[q])
    cout<<"Yes";
else
    cout<<"No";
  return 0;
}
