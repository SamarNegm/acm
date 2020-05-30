#include<iostream>
using namespace std;
int main()
{
    int i=20000,c=0;
    for(int x=1;x<i;x++)
        if(x%2==0&&x%3==0&&x%4==0&&x%5==0&&x%6==0&&x%7==0&&x%8==0&&x%10==0&&x%9==0)
        {

        cout<<x<<endl;
        c++;
        }
    cout<<c;
}
