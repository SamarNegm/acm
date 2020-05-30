//calculate inhancment
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

int main() {
    submitStage ;
    while( testMyStupedCode ){
        int a , b , c ;
        printf( "Enter Number of Solved A problems : " ) ;
        a = D() ;
        printf( "Enter Number of Solved B problems : " ) ;
        b = D() ;
        printf( "Enter Number of Solved C1 problems : " ) ;
        c = D() ;
        float prec = ( a / 16.0 ) * 50 + ( b / 10.0 ) * 30 + ( c / 7.0 ) * 20 ;
        printf( "Your Level this Week is : %0.2f %%\n" , prec ) ;
        puts( "WoW great Work, next week make it better ;)" ) ;
    }
    return 0;
}
