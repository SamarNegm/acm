#include<iostream>
using namespace std;
int a[100005],x[100005];
long long sum,l;
int ans[100005];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        if(a[x[i]]==0){
            sum++;

        }
    a[x[i]]++;
    }
    for(int i=1;i<=100005;i++)
    {
      //  cout<<sum<<"\n\n\n";
         ans[i]=sum;
        if(a[x[i]]-1>=0)
        {
            if(--a[x[i]]==0)
            {
                sum--;
            }
        }

    }

    for(int i=1;i<=m;i++)
    {
        cin>>l;
        cout<<ans[l]<<"\n";
    }






    return 0;
}
