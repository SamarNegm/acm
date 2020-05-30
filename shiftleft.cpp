#include <iostream>

using namespace std;
int n , a ,b;

int main()
{
    cin >>  n >> a >> b;
    if (a > b) swap(a ,b);
    int res = 0;
    int c = 1;
    for (int i = 1 ; i <= 10 ;i++)
    {
        c *= 2;
        if (c == n) res = i;
    }
    int t = res;
    while (n > 0)
    {
        int mid = n >> 1;
cout<<mid<<" "<<n<<' "endl;
        if ((b <= mid) || (a > mid)) res--;
        if (a <= mid && b > mid ) break;
        if (a > mid ) a -= mid, b -= mid;
        n >>= 1;
    }
    if ( res == t ) cout << "Final!" ;
    else cout << res;
    return 0;
}
