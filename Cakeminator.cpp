#include<iostream>
using namespace std;
string s[1000];
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>s[i];

    }
    int p=0;
    for(int i=0;i<a;i++)
    {
int        f=0;
        for(int j=0;j<b;j++){
            if(s[i][j]=='S'){
            f=1;
            }
        }
        if(f==0){
            sum+=b;
        p++;
        }
    }
    for(int i=0;i<b;i++)
    {
        int f=0;
        for(int j=0;j<a;j++)
        {
            if(s[j][i]=='S')
            {
                f=1;

            }
        }
        if(!f){
            sum+=(a-p);
        }
    }


    cout<<sum;

    return 0 ;
}
