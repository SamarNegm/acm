#include<iostream>
using namespace std;
long long a[10]={2,7,2,3,3,4,2,5,1,2,},ans=1;
int main()
{
    string x;
    cin>>x;
for(int i=0;i<x.length();i++)
{
    ans*=a[x[i]-'0'];

}
cout<<ans;

    return 0;
}
//         يلا مش مهم ^^
