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
const int N = 1e6 + 5;
int a[N];
vector<int> adj[N];
int p[N];
void BFS_path(int s){

    queue<int> q;
    q.push(s);
    p[s] = -1;
    while (q.size()){
        int u = q.front();
        q.pop();
        for(int  v=0;v<adj[u].size();v++){
            if(p[v] == v){
                p[v] = u;
                q.push(v);
            }
        }
    }
}
void printPath(int v){
    if(p[v] == -1){
        printf("%d ", v);
        return;
    }
    printPath(p[v]);
    printf("%d ", v);
}

;;;;;;;;;;;;;;;;;;;;;;;;;


void BFS_len(int u){
    memset(dis, -1, sizeof dis);
    dis[u] = 0;
    queue<int> q;
    q.push(u);
    while(q.size()){
        u = q.front();
        q.pop();
        for(int v: adj[u]){
            if(dis[v] == -1){
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}
int main(){
    int n = D(), m = D(), src = D(), dst = D() ;
    for(int i = 1; i <= n; ++i)
        p[i] = i;
    for(int i = 0; i < m; ++i){
        int u = D(), v = D();
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS(s);
    printPath(dst);
}

