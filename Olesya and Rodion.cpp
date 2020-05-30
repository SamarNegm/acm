#include<iostream>
using namespace std;

int main()
{
    int n,t;
     long long ans;
    cin>>n>>t;
    if(n==1&&t==10)
    {
        cout<<-1;
        return 0;
    }
 cout<<t;
 if(t<10)
    n--;
 else
    n-=2;
 while(n)
 {
     cout<<0;
     n--;
 }



    return 0;
}
