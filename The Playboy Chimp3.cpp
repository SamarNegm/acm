#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
int n ;
cin >> n ;
int a[n] ;
for(int i = 0 ; i < n ; i++ )
    cin >> a[i] ;
    int q , x ;
    cin >> q ;
    while(q--){
            cin >> x ;
    int l = lower_bound(a , a+n , x)- a ;
    if(l-1 < 0 )
        cout << "X " ;
    else if(l == n )
    cout << a[n-1] <<" ";
    else
        cout <<a[l-1]<<" " ;
    int u = upper_bound(a ,a+n , x) -a ;
    if(u == n )
        cout <<"X\n";
    else
        cout <<a[u]<<endl;
}
}

