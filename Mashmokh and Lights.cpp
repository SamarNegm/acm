#include<iostream>
using namespace std;
int a[1000];
int main()
{

   int x,c;
   cin>>x>>c;
    for(int i=1;i<=c;i++)
    {
        int q;
        cin>>q;
        for(int i=q;!a[i];i++)
            a[i]=q;
    }
    for(int i=1;i<=x;i++)
        cout<<a[i]<<" ";



    return 0;
}
