#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=0,j=-1,l;
    cin>>n>>l;
    string s;
    cin>>s;
    string tmp="",tmp2="";

    for(int k=0;k<n-1;k++){
            tmp+=s[k];
    tmp2=s[n-k-1]+tmp2;
    if(tmp==tmp2)
        j=k;

      }
      cout<<s;
      for(int i=0;i<l-1;i++)
        for(int c=j+1;c<n;c++)
        cout<<s[c];


    return 0;
}
