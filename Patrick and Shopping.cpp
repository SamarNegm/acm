#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(min(min(a*2+b*2,a+c+b),b+c+b+c),a*2+c*2);


    return 0;
}
