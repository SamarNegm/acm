#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int a[25];
int main()
{

    int t;
    cin>>t;
    bool flag=0;
    while(t--)
    {
       if(flag)
       cout<<"\n";
       else
        flag=1;

       int i=0,d;
       char c;
        while(scanf("%d%c",&d,&c))
           {
               a[i++]=d;
               if(c=='\n')
                break;
           }
         int ff=0;
         for(int k=0;k<pow(2,i);k++){

                int f=0,s=0;
            for(int j=0;j<i;j++){
            if(k&(1ll<<j)){
            f+=a[j];

            }
         else{
            s+=a[j];

            }
            }
            if(f==s)
            {
                cout<<"YES";
         ff=1;
                break;
            }
if(ff)
    break;
         }
            if(!ff)cout<<"NO";
    }
   cout<<"\n";

    return 0;
}
