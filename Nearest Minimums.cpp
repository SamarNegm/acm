#include<iostream>
using namespace std;
int a[100000000];
int main()
{

    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int z;
        cin>>z;
        a[z]++;
    }
    int i=0;
    while(true){
        if(a[i])
    {
        cout<<a[i];
        break;
    }
    i++;
    }



    return 0;
}
