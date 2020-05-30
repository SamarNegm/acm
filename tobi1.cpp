#include<bits/stdc++.h>
//A
using namespace std;
const int N = 1e5+5;
int T,n,m,k;
int t1,t2;
int arr[N];
int arr2[N];
long long ans=0;
int main()
{
scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<n;++i)
    {
        scanf("%d",arr+i);
        arr2[arr[i]]=i;
    }
int appnum,beforeappnum,idx,beforeidx;
/*
appnum is the number of the app entered in the query
idx is its place
beforeappnum is the number of the app which is located before the current app in query
beforeidx is its place
*/
    for(int x=0;x<m;++x)
    {
        scanf("%d",&appnum);
        idx=arr2[appnum];
        ans+=idx/k+1;
        if(arr2[appnum]>0)
        {
		beforeidx=idx-1;
		beforeappnum=arr[beforeidx];
            swap(arr[idx],arr[beforeidx]);
            swap(arr2[appnum],arr2[beforeappnum]);
        }
    }
    printf("%lld\n",ans);
}
