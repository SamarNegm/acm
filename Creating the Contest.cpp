#include<bits/stdc++.h>
using namespace std;
int a[200005];

int n, x,ans,tmp;
;int main()
{

    cin>>n;
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]<=(2*a[i-1]))
            tmp++;
        else
        {
            ans=max(ans,tmp);
            tmp=0;

        }
    }
    cout<<max(ans,tmp)+1;


    return 0;
}
