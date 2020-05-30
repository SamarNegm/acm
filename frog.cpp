#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int b[100000];
int main()
{
    int x,f=1,z=0,n;
    cin>>n>>x;
int ans=0;
for(int j=x;j>0;j--)
{
    ans-=j;
    cout<<-1*ans<<" ";
    j--;
    if(j<1){        break;
    f=0;
    }
    ans+=j;
    cout<<-1*ans<<" ";

}
if(!f)
for(int i=x;i<n;i++)
{
    ans+=1;
    cout<<-1*ans<<" ";
    i++;
    if(i==n-1)
        break;
        ans-=1;
        cout<<-1*ans<<" ";
}
else{

    for(int i=x;i<n;i++)
{
    ans-=1;
    cout<<-1*ans<<" ";
    i++;
    if(i==n-1)
        break;
        ans+=1;
        cout<<-1*ans<<" ";
}

}



}
