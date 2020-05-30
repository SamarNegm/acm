#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x;
    int sum0=0,sum1=0,y;
    cin>>y;
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='0')
            sum0++;
        else
            sum1++;
    }
    cout<<x.length()-(min(sum0,sum1)*2);








    return 0;
}
