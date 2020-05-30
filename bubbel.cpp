#include<iostream>
using namespace std;
int main()
{

    int a[10];
    for(int i=0; i<10; i++)
        cin>>a[i];

    int i=9;
    for( ;;)
    {
        int j=0;
        for(;;)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);

            }
            j++;
            if(j==9)
                break;


        }
        i--;
        if(i==0)
            break;


    }
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";




    return 0;
}
