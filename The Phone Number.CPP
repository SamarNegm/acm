#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a=sqrt(n);
       int k=a-1;
    for(int i=n;i>0;i-=a)
    {

        for(int j=k;j>=0;j--)
            if(i-j>0)
            cout<<i-j<<" ";

    }

    return 0;
}
