#include<iostream>
using namespace std;
int a[1000004];
int main()
{
    int x,m=0,e=0,b,v=0,r=0;
    cin>>x;
    for(int i=0; i<x; i++)
    {

        cin>>b;
        a[b]++;
        if(b>e)
            e=b;
    }
    for(int i=0;i<=e;i++)
         if(a[i]%2!=0){
               m=i;

        }


    int sum=0;
    a[m]--;

    for(int i=m;i<=e;i++){
            if(a[i]!=0)

        sum+=a[i];
    }

    cout<<(sum%2==0?"Conan":"Agasa");
}

