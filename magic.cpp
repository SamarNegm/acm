#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int N = 1e3 + 5;
const int mod = 998244353;
const int INF = 2e9;
const double EPS = 1e-8;
const double pi = acos(-1);
int n, p[N], dp[N][3][3][3];
string s[N];
int solve(int i, bool a, bool b, bool c) {
    if (a && b && c) return 0;
    if (i == n) return INF;
    bool na = a, nb = b, nc = c;
    if (dp[i][a][b][c] != -1)
        return dp[i][a][b][c];
    for (int j = 0; j < s[i].size(); j++) {
        if (s[i][j] == 'A') na = 1;
        if (s[i][j] == 'B') nb = 1;
        if (s[i][j] == 'C') nc = 1;
    }
    int c1 = solve(i + 1, na, nb, nc) + p[i];
    int c2 = solve(i + 1, a, b, c);
    cout<<c1<<" "<<c2<<"\n";
    return dp[i][a][b][c] = min(c1, c2);
}
int main() {
    memset(dp, -1, sizeof dp);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i] >> s[i];
    int res = solve(0, 0, 0, 0);
    cout << (res == INF? -1: res);
    return 0;
}
