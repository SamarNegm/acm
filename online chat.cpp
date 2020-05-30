#include <iostream>
#include <algorithm>

using namespace std;

int main(){

 int v[1004]={0},p,q,l,r,i,cnt=0;
 cin>>p>>q>>l>>r;

 int a[p],b[p];

 for(i=0;i<p && cin>>a[i] && cin>>b[i];i++);

 for(i=0;i<q;i++){
     int c,d;
     cin>>c>>d;

     for(int j=0;j<p;j++){
       int x=a[j]-d,y=b[j]-c;

       if(y<l || x>r)
          continue;

       for(int k=max(x,l);k<=min(y,r);k++)
           if(!v[k])
                cnt++,v[k]=1;
   }
 }

 cout<<cnt;

  return 0;
}
