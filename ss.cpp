#include<iostream>
#include<algorithm>

using namespace std;
long long a[100000];
long long b[100000];
int main()
{

    long long m,n,pos1=0,pos2=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0)
            pos1=1;
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        if(b[i]>0)
            pos2=1;
    }
    sort(a,a+n);
    sort(b,b+m);
    if(pos1&&pos2)
    cout<<b[m-1]*a[n-2];
    else if(pos1)
        cout<<a[n-2]*b[0];
    else
        if(pos2)
        cout<<b[m-1]*a[1];
    else
        cout<<a[1]*b[0];


    return 0;
}
