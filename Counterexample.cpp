#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(a%2==1)
        a++;
    if(b-a<2)
        cout<<-1;
    else
        cout<<a<<" "<<a+1<<" "<<a+2;




    return 0;
}
