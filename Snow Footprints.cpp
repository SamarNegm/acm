#include<iostream>
using namespace std;
int main()
{

    int x;
    cin>>x;
    string s;
    cin>>s;
    int f=0,e=0;
    for(int i=0;i<x;i++)
    {
        if(s[i]=='R')
        {
            f=i;
            break;
        }

    }
    for(int i=0;i<x;i++)
    {
        if(s[i]=='L')
        {
            e=i;
            break;
        }
    }
    if(e&&f)
    cout<<f+1<<" "<<e;
    else if(e){

        for(int i=e;i<x;i++)
            if(s[i]!='L'){
            cout<<i;
        break;
            }
             cout<<" "<<e<<" ";
    }
    else
    {
           cout<<f+1<<" ";
        for(int i=f;i<x;i++)
            if(s[i]!='R'){
            cout<<i+1;
        break;
            }
    }
    return 0;
}
