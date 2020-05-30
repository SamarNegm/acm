#include<bits/stdc++.h>
using namespace std ;

#define endl '\n'
#define ll long long

void read()
{
    freopen("input.txt", "r",stdin ) ;
    freopen("out.txt", "w", stdout ) ;
}
bool voi(char c)
{
    return (c=='a' || c=='e' || c== 'i' || c=='y' || c=='o' || c=='u') ;
}

ll log_pow(ll b , ll p ){

 if (p == 0 ) return 1 ;
 if (p == 1 ) return b ;
 if ( p%2 )   return b * log_pow(b , p-1) ;

  ll r = log_pow(b , p/2 ) ;

  return r * r ;
}

int d5l_i()
{
    int x ;
    scanf("%d", &x) ;
    return x  ;
}
ll  d5l_l()
{
    ll x ;
    scanf("%lld", &x) ;
    return x  ;
}
char d5l_c()
{
    char x ;
    scanf("%c", &x) ;
    return x  ;
}

ll fact(int  n ){
  ll   fc = 1 ;
 for(int i = 2 ; i <= n ; i++ )
    fc *= i ;
 return fc ;
}

int len(ll n ){
  int c  = 0 ;
  while(n){
    n/=2  ;
    c++  ;
  }
return c  ;
}

bool is_prime( int n  ){

   for(int i = 2 ; i * i <= n ; i++ )
    if( n%i == 0 ) return false ;
   return true  ;

}
bool is_palind(string s ){

   for(int i = 0 ; i <= s.length()/2 ; i++ )
      if(s[ i ] != s[ s.length() - i - 1   ])
       return false ;
return true ;
}
 vector< int > divs ;
int  genDivs( int n ){
    for( int i = 1 ; i * i <= n ; ++i ){
        if( n % i == 0 ){
            divs.push_back( i ) ;
            if( n / i != i )
                divs.push_back( n / i ) ;
        }
    }
 return divs.size() ;
}


vector < string > dic , ans  ;

string s , msk ;


void solv( int k , string &mk , string t  ){

string d ;

if ( k == mk.length() ){
    ans.push_back(  t + d   );
   return ;

}

if( mk[ k ] == '#'  ){
    d="" ;
    for(int i = 0 ; i < dic.size() ; i++ ){
         d += dic[ i ] ;
         int f  = dic[ i ].length() ;

         solv(k+1 , mk  , t+d   ) ;

         while(f--){
            d.pop_back();
         }

    }

}

else {
        d= "";
   for ( char  i = '0' ; i <= '9' ; i++ )
   {
       d += i ;
       solv( k+1 , mk , t + d  ) ;

            d.pop_back() ;
   }
}

}


int main (){

  int n , m ;

  while(scanf("%d" , &n ) != EOF){
    puts("--") ;
    for(int i = 0 ; i < n ; i++ ) {
        cin >> s ;
        dic.push_back( s  ) ;
    }
    scanf("%d" , &m ) ;
    for(int i = 0 ; i < m ; i ++ ){
    cin >> msk ;
    solv( 0  ,  msk  , "" ) ;

    for(int i = 0 ; i < ans.size() ; i++ )
        cout<< ans [ i ] << endl;

     ans.clear() ;
    }

   dic.clear() ;
  }

}
