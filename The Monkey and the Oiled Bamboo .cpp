#include<bits/stdc++.h>
using namespace std;
int n,k,t,a[100005],d;
bool ok(int x)
{
    for(int i=0; i<n; i++){
     //       cout<<x<<" "<<a[i+1]-a[i]<<" "<<a[i+1]<< " "<<a[i]<<" "<<i<<" "<<a[i]<<"\n";
        if(a[i+1]-a[i]>x)
            return false;
        else if(a[i+1]-a[i]==x)
            x--;
    }

    return true;
}
int main()
{

    cin>>t;
    for(int k=1; k<=t; k++){
            d=0;
        cin>>n;
a[0]=0;
    for(int j=1; j<=n; j++){
        cin>>a[j];
    }


    int l=1,h=a[n];
    while(l<h)
    {
        long long  mid=(l+h-1)>>1;
        if(ok(mid))
            h=mid;
        else
            l=mid+1 ;

         d++;
         if(d==50)
            break;
    }

    cout<<"Case "<<k<<": "<<h<<"\n";
}


return 0;

}
