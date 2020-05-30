#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==7-y||b==7-y||a==y||b==y){
            cout<<"NO";
        return 0;
        }
    }
    cout<<"YES";



    return 0;
}
