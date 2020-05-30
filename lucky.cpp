#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int aa,b;
    cin>>aa>>b;
    vector<long long > a;
    a.push_back(0);
    int i;
    for( i=0;a[i]<b;i++)
    {
         a.push_back(a[i]*10+4);
        a.push_back(a[i]*10+7);
    }
    int j=0;
    for(j;a[j]<aa;j++);
    //cout<<j<<endl;;
long long l=aa,sum=0;
if(aa==b)
    cout<<(b-l+1)*a[j];
else{
for(int i=l;a[j]<b;j++)
{
    //cout<<sum<<" "<<a[j]<<endl;
  sum+=(a[j]-l+1)*a[j];
  l=a[j]+1;
  //  cout<<sum<<endl;

}
//cout<<a[j]<<"v "<<l<<endl;;
sum+=(b-l+1)*a[j];
cout<<sum;
}
    return 0;
}
