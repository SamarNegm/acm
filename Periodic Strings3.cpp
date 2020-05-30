#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int t ;
string s ;
bool ok( string a ){

  if( s.length()%a.length()!=0  )
  return false ;

  string d = "" ;

  while( d.length() < s.length() ){
    d += a ;
    if( d == s )
        return true ;

  }


  return false ;
}


int main(){
scanf("%d" ,&t ) ;
bool f = false ;
while( t-- ){
    if( f ) cout << endl;
    string d = "";
    cin >> s ;

    for(int i = 0 ; i < s.length() ; i++ ) {
     d += s[ i ] ;
     if( ok( d ) ){
         cout << i+1 ;
         break ;
     }
    }
    f = true ;
   	puts("");
}

}
