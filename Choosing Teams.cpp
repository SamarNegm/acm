#include<bits/stdc++.h>
using namespace std;
int q[1000000];
int main()
{
    int a,b,i=0,aa=0;
    cin>>a>>b;
    while(a--)
    {
        cin>>q[i++];
    }
    sort(q,q+i);
   for(int j=0;j<i;j+=3)
   {
       int ans=0,p=0;;
       for(int k=j;k<j+3&&k<i;k++ )
       if(5-q[k]>=b)
        p++;
       if(p==3)
        aa++;

   }
   cout<<aa;



    return 0;
}
