#include<bits/stdc++.h>
using namespace std;
int idx[2000005];
int main()
{
  int n,maxp=0,x;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
   scanf("%d",&x);
    idx[x]=i+1;
  }
  for(int i=0;i<n;i++)
  {
      scanf("%d",&x);
      if(idx[x]<maxp){
       printf("0 ");
      }
      else
      {
      printf("%d ",idx[x]-maxp);
  maxp=idx[x];
      }
  }



    return 0;
}
