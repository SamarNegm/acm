#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>36)
        cout<<-1;
    else
    {
        if(x%2)
            printf("4");
            for(int i=0;i<x/2;i++)
                printf("8");

    }


    return 0;
}
