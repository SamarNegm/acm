#include<bits/stdc++.h>
using namespace std;
long long sum,sum1;
int a[27];
int fa[27];
int main()
{
string s,ans,news="";
cin>>s;
string s2=s,s3=s;
if(s.length()<3)
{
    cout<<s;
    return 0;
}
sort(s2.begin(),s2.end()-1);
sort(s3.begin()+1,s3.end());
cout<<min(s3,s2);
    return 0;
}
