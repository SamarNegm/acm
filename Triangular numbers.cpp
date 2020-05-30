#include<iostream>
using namespace std;
int a[10000000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=500;i++)
        a[(i*(i+1))/2]++;
    cout<<(a[n]?"YES":"NO");



    return 0;
}
