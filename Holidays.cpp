#include<iostream>
using namespace std;
int main()
{

    long long x;
    cin>>x;
    if(x%7!=6)
    cout<<x/7*2<<" "<<x/7 *2+(x%7>=2?2:x%7);
    else
        cout<<x/7*2+1<<" "<<x/7*2+(x%7>=2?2:x%7);


    return 0;
}
