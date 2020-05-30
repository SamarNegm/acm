#include<iostream>
#include<algorithm>
using namespace std;
int a[1000];
int main()
{
    int x,i=0;
    cin>>x;
    int k=x;
    while(x--)
        cin>>a[i++];
    sort(a,a+k);
   for(int i=1;i<k;i++)
   {
       if(a[i]!=a[i-1])
       {
           cout<<a[i];
           return 0;
       }
   }
cout<<"NO";

    return 0;
}
