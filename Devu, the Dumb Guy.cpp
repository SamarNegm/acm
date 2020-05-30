#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000000];
int main()
{
    long long n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long sum=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        sum+=a[i]*x;if(x>1)x--;}
    cout<<sum;



    return 0;
}
