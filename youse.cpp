#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=3e5+5;
long long l,h;
int main()
{
      scanf("%lld %lld",&l,&h);
      int num=-1;
      for(int i=63;i>-1;--i)
      {
          cout<<(l>>i)<<" "<<(h>>i)<<endl;
          if((l>>i)!=(h>>i))
          {
              num=i;
              break;
          }
      }
      cout<<num<<"   ";
        printf("%lld\n",(1ll<<(num+1))-1);
}
