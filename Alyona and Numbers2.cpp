#include<iostream>
using namespace std;
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    ans=min(a,b)*2;
    int p[(a+b)/5];
    for(int i=0;i<=(a+b)/5;i++)
    {
        p[i]=i*5;
        cout<<p[i]<<" ";
    }
    cout<<"\n"<<" "<<p[ans/5+1]<<"\n"<<p[(a+b)/5]<<" eeeeeeeeeee\n";;
    for(int j=max(a,b);j>p[(a+b)/5-1];j--)
    if(j-p[min(a,b)*2/5+2]>min(a,b))
    break;
    else{
            cout<<"ans is now "<<ans<<"\n";
        ans++;
        cout<<p[min(a,b)/5+2]-j<<endl;
    }
    cout<<ans;







    return 0;
}
