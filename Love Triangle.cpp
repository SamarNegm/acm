#include<iostream>
using namespace std;
int a[100000];
int main()
{

    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
        cin>>a[i];

    for(int i=1;i<=x;i++)
        if(a[a[a[i]]]==i){

        cout<<"YES";
        return 0;
        }

        cout<<"NO";
    return 0;
}
