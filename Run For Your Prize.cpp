#include<iostream>
#include<cmath>
using namespace std;
long long a[10000000];
int main()
{
    int x,i=0;
    cin>>x;
    int k=x;
    while(x--)
    {
        cin>>a[i++];

    }
long long    pos1=1,ans=0,f=0,p=0;
  long long  pos2=1000000;
 for(int i=0;i<k;i++)
    if(a[i]>
       pos2/2)
 {
     f=1;
     p=i;
     break;
 }
if(f)
    cout<<max(pos2-a[p],a[p-1]-1);
else
    cout<<a[k-1]-1;

    return 0;
}
