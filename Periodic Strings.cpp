#include<iostream>
#include<vector>
using namespace std;
bool isSupper(long long x)
{
    int n4=0,n7=0;
    while(x)
    {
        if(x%10==7)
            n7++;
        else if(x%10==4)
            n4++;
        x/=10;


    }
    if(n4==n7)
        return true;
    else
        return
        false;
}
int main()
{
    int x;
    cin>>x;
    vector<long long > a;
    a.push_back(0);
    for(int i=0;;i++)
    {
         a.push_back(a[i]*10+4);
        if((a[i]*10+4)>=x&&isSupper(a[i]*10+4))
        {
            cout<<(a[i]*10+4);
            break;
        }
        a.push_back(a[i]*10+7);
        if((a[i]*10+7)>=x&&isSupper(a[i]*10+7))
        {
            cout<<(a[i]*10+7);
            break;
        }
    }

    return 0;
}
