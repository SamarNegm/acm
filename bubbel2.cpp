#include<iostream>
using namespace std;
int main()
{
    int a[100];
    for(int i=0; i<10; i++)
        cin>>a[i];
    for(int i=0; i<9; i++)
        for(int j=8; j>=0; j--)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    return 0;
}
