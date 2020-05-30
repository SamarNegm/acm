
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <math.h>
#define ll long long

using namespace std;

int main() {

	int n, k;
	string t;
	cin >> n >> k >> t;
	string s = t;
	string temp1 = "", temp2 = "";
	int max = 0;
	for (int i = 0; i < n-1; i++)
	{
		temp1 += t[i];
		temp2 = t[n-1-i] + temp2;
		cout<<temp1<<" "<<temp2<<"\n";
		if (temp1 == temp2 && max < temp1.size())
        {cout<<"hi ",
			max = temp1.size();
	cout<<max<<"\n";}}

	for (int i = 0; i < k - 1; i++)
	{
		for (int j = max; j < n; j++)
		{
			s += t[j];
		}
	}

	cout << s << endl;

	return 0;
}
