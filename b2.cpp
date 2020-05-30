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
#include <list>
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
void ReadFromFile( string name , string extention ){
    string fullPath = name + "." + extention ;
    freopen( fullPath.c_str() , "r" , stdin ) ;
}
inline int D(){
    int t ;
    scanf( "%d" , &t ) ;
    return t ;
}
inline ll LLD(){
    ll t ;
    scanf( "%lld" , &t ) ;
    return t ;
}
inline char C(){
    char c ;
    scanf( "%c" , &c ) ;
    return c ;
}
inline ll power(ll x, ll p, ll m){
    ll res = 1;
    while(p){
        if(p & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        p >>= 1;
    }
    return res;
}
long double ModLog(long double base, long double x) {
    return (logl(x) / logl(base));
}
int gcd(int a, int b){
     if(!b)
          return a;
     return gcd(b, a % b);
}
const int N = 1e3 + 5;
int n, m;
int a[N], b[N];

int main(){
     //freopen("//Users//Mr.X//Desktop//tests//tst.text", "r", stdin);
     n = D();
     for(int i = 0; i < n; ++i)
          a[i] = D();
     sort(a, a + n);
     int l = 0, h = n - 1;
     int idx = 0;
     while (idx < n) {
          if(l != h)
               b[l++] = a[idx++];
          b[h--] = a[idx++];
     }
     for(int i = 0; i < n; ++i)
          printf("%d ", b[i]);
     return 0;
}
