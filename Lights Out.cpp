#include<iostream>
using namespace std;
int a[4][4];
int main()
{
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            int x;
            cin>>x;
            if(x&&x%2){

                a[i+1][j]+=x;
            a[i-1][j]+=x;
            a[i][j]+=x;
            a[i][j+1]+=x;
            a[i][j-1]+=x;
            }
        }
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){

        if(a[i][j]%2)
            cout<<0;
        else
            cout<<1;

        }
        cout<<"\n";
    }



    return 0;
}
