
#include<iostream>
using namespace std;
int a[1000];
int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=0; i<m; i++)
        cin>>a[i];
    int x=n-1,j=1,ans=0;
    while(true)
    {


        if(x-j>=0&&x+j<m)
        {

            if(a[x-j]&&a[x+j])
                ans+=2;

            j++;
        }
        else if(x-j>=0){
            if(a[x-(j++)])
                ans++;
        }
            else if(x+j<m){
                if(a[x+(j++)])
                    ans++;

            }
                else
                    break;

    }
if(a[n-1])
    ans++;
    cout<<ans;



    return 0;
}
