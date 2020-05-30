#include <bits/stdc++.h>
#define fin freopen("input.txt", "r", stdin);
#define fout freopen("output.txt", "w", stdout);
const int MX = (1e5) + 2;
const int M = MX*2;
using namespace std;
int solve(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i=1; i<n; ++i){
        int j = (n - i);
        if(min(a / i, b / j) > ans && i <= a && j <= b){
            ans = min(a / i, b / j);
        }
    }
    cout << ans << endl;
}
int main(){
    //fin fout
    ios_base::sync_with_stdio(0);
    solve();
    return 0;
}
