#include<iostream>
using namespace std;
int main()
{

    int x;
    cin>>x;
    for(int i=0;i<x/2;i++)
    {
     // cout<<x-(i*2+1)<<endl;
        for(int j=0;j<(x-(i*2+1))/2;j++)
        cout<<"*";
        for(int k=0;k<i*2+1;k++)
        cout<<"D";
        for(int j=0;j<(x-(i*2+1))/2;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<x;i++)
        cout<<"D";
    cout<<endl;
    for(int i=1;i<=x/2;i++)
    {
          for(int j=0;j<i;j++)
        cout<<"*";
        for(int k=0;k<x-i*2;k++)
        cout<<"D";
        for(int j=0;j<i;j++)
        cout<<"*";
        cout<<endl;
    }


    return 0;
}
