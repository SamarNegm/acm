#include<iostream>
#include<vector>
using namespace std;
int main()
{
long long l,r,sum=0;
cin>>l>>r;
    vector<long long > a;
    a.push_back(0);
    int i;
    for( i=0;a[i]<=r;i++)
    {
         a.push_back(a[i]*10+4);
        a.push_back(a[i]*10+7);
    }

int pl=lower_bound(a.begin(),a.end(),l)-a.begin();
int pr=lower_bound(a.begin(),a.end(),r)-a.begin();
int last=l;
for(int i=pl;i<=pr;i++)
{

    sum+=(min(r,a[i])-last+1)*a[i];
    last=a[i]+1;
}
cout<<sum;




}
