#include<iostream>
using namespace std;
int main()

{
    int a,b;
    cin>>a>>b;
 int ans=0;
 ans+=min(a,b)*2;
 //cout<<ans<<"  ";
 for(int i=max(a,b);i>min(a,b);i--)
 {
for(int j=1;j<min(a,b);)
{
    if((i+j)%5==0)
    {
        cout<<j<<" "<<i<<"  "<<i+j<<endl;
        ans++;
        j+=5;

    }
    else
        j++;
}

 }


cout<<ans;
    return 0;
}
