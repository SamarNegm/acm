#include<iostream>
using namespace std;
int main()
{

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



    return 0;
}
