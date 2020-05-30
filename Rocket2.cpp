#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int r,n,m;
bool p[40];
int main()
{
    scanf("%d %d", &n, &m ) ;
    for(int i = 0; i < m ; i++ )
    {
        scanf( "%d",&r ) ;
        if(r==0)
            exit(0);
        else
            p[ i ] = ( r > 0 ? 1 : 0) ;
    }
    int l=1,h=n,i=0;
    while(l<h)
    {
        int mid=(l+h+1)/2;
        scanf( "%d",&r );
        if( r==0 )return 0   ;
        if( p[ i++ ]==0 ) r *= -1 ;
        if( r == 1  )
            l = mid ;
        else
            h = mid - 1 ;

    }
    return 0;
}
//لست محور الكون
