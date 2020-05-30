#include<bits/stdc++.h>
using namespace std;
int n;
bool ook(string s,int x)
{
    for(int i=0,j=n-x-1+(n==2);i<=x;i++,j++){
        if(s[i]!=s[j])
        return false;
    }
    return true;

}
int ok(string s)
{
    for(int i=n/2;i>=0;i--)
        if(ook(s,i))
        return i+1;
        return 0;
}
bool ok2( string a,string s ){

  if( n%a.length()!=0  )
  return false ;

  string d = "" ;

  while( d.length() <n ){
    d += a ;
    if( d == s )
        return true ;

  }


  return false ;
}




int main()
{
    int k,i=0,j,l;
    cin>>n>>l;
    string s,tmp="",tmp2="",ans="",d="" ;
    cin>>s;
int q=ok(s);
if(q==n)
    q--;
 for(int i = 0 ; i < s.length()-1 ; i++ ) {
     d += s[ i ] ;
     if( ok2( d ,s) ){
            cout<<s;
for(int i=0;i<l-1;i++)
    cout<<d;
return 0;
     }
 }
for(int i=n-q;i<n;i++)
    tmp2+=s[i];
    for(int k=0;k<n-q;k++)
       tmp+=s[k];
       for(int k=0;k<l;k++)
        ans+=tmp ;
      ans+=tmp2;
cout<<ans;
    return 0;
}
