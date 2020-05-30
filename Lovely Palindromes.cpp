#include<iostream>
using namespace std;
int main()
{

    string x;
    cin>>x;
    cout<<x;
    for(int i=0;i<x.length();i++)
    {
      cout<<x[x.length()-i-1];
    }



    return 0;
}
