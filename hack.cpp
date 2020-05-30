
#include <functional>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include<iostream>
#include <fstream>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include<cmath>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <bitset>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
//#define lp(i,n)    for(int i=0;(int)i<n;++i)
typedef long long ll;
using namespace std;
const int MAX = 1e18 + 9;
void fast()
{
    std::ios_base::sync_with_stdio(0);
}
int main()
{
    int n;
    cin >> n;
    string s;
    string notb="*";
    int SumOfAll = 0;
    while (n--)
    {
        int cnt = 0;
        cin >> s;
        if (s[0] == '0')
        {
            cout << 0;
            return 0;
        }
        if (s[0] != '1')
        {
            notb = s;
            continue;
        }
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '0')cnt++;
        }
        if (cnt == len - 1)SumOfAll += cnt;
        else notb = s;
    }
    if (notb != "*")
    {
        cout << notb;
        while (SumOfAll--)
            cout << 0;
    }
    else
    {
        cout << 1;
        while (SumOfAll--)
            cout << 0;
    }

}
