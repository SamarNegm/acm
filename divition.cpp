
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <deque>
#include <math.h>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
#include <queue>
#include <stack>
#include<cassert>
#include <cfloat>
using namespace std ;
#define ll long long
#define submitStage int TCF = 1 ;
#define testStage int TCF = 1000 ;
#define testMyStupedCode TCF--
void FastInputOutput(){
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
void ReadFromFile(){
    freopen( "input.in", "r" , stdin ) ;
}
int D(){
    int t ;
    scanf( "%d" , &t ) ;
    return t ;
}
ll LLD(){
    ll t ;
    scanf( "%lld" , &t ) ;
    return t ;
}
char C(){
    char c ;
    scanf( "%c" , &c ) ;
    return c ;
}
int main() {
    int n ;
    bool print = false ;
    while ( n = D() ) {
        if( print )
            puts( "" ) ;
        print = true ;
        bool flag = true ;
        for( int b = 1234 ; b <= 98765 ; ++b ){
            int a = n * b ;
            if( a > 99999 )
                break ;
            int used = b < 10000 ;
            int temp = a ;
            while( temp ){
                used |= ( 1 << ( temp % 10 ) ) ;
                temp /= 10 ;
            }
            temp = b ;
            while( temp ){
                used |= ( 1 << ( temp % 10 ) ) ;
                temp /= 10 ;
            }
            if( used == ( 1 << 10 ) - 1 && !( flag = false ) )
                printf( "%0.5d / %0.5d = %d\n" , a , b , n ) ;
        }
        if( flag )
            printf( "There are no solutions for %d.\n" , n ) ;
    }
    return 0;
}
