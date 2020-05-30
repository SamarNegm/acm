
#include<iostream>
using namespace std;
int main()

{
    int a,b;
    cin>>a>>b;
    int c[(a+b)/5];
    c[0]=5;
    for(int j=0,i=1;j<(a+b)/5;j++,i++){
    c[i]=i*5;
    }
    int ans=0;
    for(int i=1;i<=min(a,b);i++)
        for(int j=1;j<=(a+b)/5;j++)
        if(c[j]-i>0&&c[j]-i<=max(a,b)){
                cout<<i<<" "<<c[j]<<"  "<<c[j]-i<<endl;

        ans++;
        }

cout<<ans;
    return 0;
}
