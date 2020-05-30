#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[1000001];
long long b[1000001];
long long idxx[10000001];
int k;
bool cpm(long long s,long long f )
{
    if(b[s]>b[f]&&b[s]-b[f]>=k)
        return true;
}
int main()
{

    int n;
    cin>>n>>k;
    if(n/k==2&&n%k==0&&n!=2)
    {
        cout<<1<<" "<<n/2+1;
    }
    else
    {


        long long i=1,j=1,mx=0,idx=0;
        while(n--)
        {
            int x;
            cin>>x;
            a[i]+=x+a[i-1];
            i++;
            if(i>=k+1)
            {
                b[j]=a[i-1]-a[i-k-1];
                if (b[j]>mx)
                {
                    mx=b[j];
                    idx=j;
                }
                j++;
            }

        }
        long long mx2=0,idx2=0;
        /*for(int i=idx-k;i>0;i--)
        {
            if(b[i]>mx2)
            {

                mx2=b[i];
                idx2=i;
            }
        }

        for(int i=idx+k;i<j;i++)
        {
        if(b[i]>mx2)
        {
            mx2=b[i];
            idx2=i;

        }
        }
        */
        cout<<idx;
        long long mx1=0,mx22=0,ans=0;
        for(int i=1; i<j-k; i++)
        {

        }
        cout<<idxx[1]<<" "<<idxx[2]<<"\n";
        if(mx1<mx22)
            cout<<mx1<<" "<<mx22<<endl;
        else
            cout<<mx22<<" "<<mx1;


    }
    return 0;
}
