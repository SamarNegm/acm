#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n ;

int a[6] ={1,2,4,4,5,6};




      int u = upper_bound(a ,a+6 ,9) -a ;
    cout<<u<<endl;;

    return 0;
}
