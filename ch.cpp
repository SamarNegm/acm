#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int x;
    cin>>x;
    int a[x];
    for(int i=0; i<x; i++)
        cin>>a[i];
    int t;
    for(int i=0; i<t; i++)
    {
        int z;
        cin>>z;
        int y=lower_bound(a,a+x,z)-a;
        if(y>a[x-1])
        {
            cout<<a[x-1]<<" "<<"X\n";
        }
        else if(a[y]<=a[0])
        {
            cout<<"X"<<" "<<a[y]<<endl;;
        }
        else if(a[y]==z)
        {
            cout<<a[y-1]<<" ";
            if (y+1==x)
                cout<<"X";
            else
                cout<<a[y+1]<<endl;
        }
        else{
            cout<<a[y-1]<<" ";
        if(y==x)
            cout<<"X\n";
            else
        cout <<a[y]<<endl;
        }

    }



    return 0;
}
