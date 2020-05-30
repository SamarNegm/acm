#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n%2==0)
    cout<<n*(n/2)<<"\n";
    else
        cout<<n*n/2+1<<"\n";
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
            if(j%2)
            cout<<".";
        else
            cout<<"C";
            cout<<"\n";
              for(int j=0;j<n;j++)
                if(j%2)
            cout<<"C";
        else
            cout<<".";

            cout<<endl;
    }
    if(n%2)
          for(int j=0;j<n;j++)
                if(j%2)
            cout<<".";
        else
            cout<<"C";
}
