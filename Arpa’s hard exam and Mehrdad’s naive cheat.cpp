
#include<iostream>
using namespace std;


int main()
{
    long long z;
    cin>>z;
    if(z==0)
        cout<<1;
 else  if(z%8==1||z%8==5)
    cout<<8;
 else if(z%8==2||z%8==6)
    cout<<4;
 else if(z%8==3|z%8==7)
 cout<<2;
 else
    cout<<6;
    return 0;
}
