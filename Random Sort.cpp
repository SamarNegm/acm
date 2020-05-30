#include <bits/stdc++.h>
using namespace std;
bool c[1000000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(c,0,1000000);
        int ans=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(c[a[i]]==0)
            {
                c[a[i]]=1;

            }
            else
                ans++;

        }
           cout<<(ans+1)%7901<<"\n";

    }

    return 0;
}
