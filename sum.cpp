
#include<iostream>
#include<algorithm>
int a[100000000];
using namespace std;
int main()
{
   int n,l,r,q,ans1=0;
cin>>l>>r;
for(int i=l;i<=r;i++)
    a[i]=i;
    int x=r-l+1;
    cout<<x<< "\n" ;

        int f=lower_bound(a,a+x,l)-a;
        int e=upper_bound(a,a+x,4)-a;
        if(lower_bound(a,a+x,4)-a==x){
            ans1=0;
        }
        else
    cout<<4*(a[e-1]-l+1)<<endl;
int k=upper_bound(a,a+x,7)-a;
cout<<7*(7-a[e]+1);


    return 0;
}
