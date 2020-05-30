#include<bits/stdc++.h>
using namespace std;
int a[20000006],ans,x[2000008];
long long sum=0;
vector<int>an;
int main()
{
    long long t,b,k;
    cin>>t;
for(int i=0;i<t;i++)
{
    cin>>x[i];
    a[x[i]]++;
    sum+=x[i];

}
for(int i=0;i<t;i++)
{
    if((sum-x[i])/2 < 2000005){
    if(a[(sum-x[i])/2]>=1&&(sum-x[i])%2==0){

if(x[i]!=(sum-x[i])/2||a[x[i]]>1){

        an.push_back(i+1);
        ans++;
}
    }
}
}
cout<<ans<<"\n";
for(int i=0;i<ans;i++)
    cout<<an[i]<<" ";




    return 0;
}
