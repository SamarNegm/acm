#include<bits/stdc++.h>

using namespace std ;
int a[1005] ;
int main(){
    int n , m , d  , ans = 0 , dif = 0  ;
    cin >> n >> m >> d  ;

     for(int i = 0 ; i < m+1 ; i++ )
      cin >> a[i] ;

    for(int k = 0 ; k < m ;k ++ ){
        dif = 0 ;
    for (int i = 30 ; i >= 0 ; i-- )
        if( ( a[k] & (1 << i ) && ! (a[m] & (1 << i) ))||( ! (a[k] & (1 << i ) ) &&  (a[m] & (1 << i)  ) ) ){
             dif++ ;
        }
      if(dif <= d ){
        ans++ ;

      }
    }

    cout << ans <<endl ;
 }
