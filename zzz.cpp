#include<iostream>
using namespace std;
int f;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            int c;
            cin>>c;
            if(((j==0||j==b-1)&&c==1)||((i==0||i==a-1)&&c==1))
           f=1;

        }
    }

    cout<<(f?2:4);
}
