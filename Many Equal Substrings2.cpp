#include <iostream>
#include <string>
using namespace std;
int n, k;
string t;
int main() {
	cin >> n >> k;
	cin >> t;
	string s = t;
	k--;
	int i = 1;
	while (k != 0) {
		string v = s.substr(i);
		cout<<v<<"  "<<i<<"  "<<t.substr(0, v.length())<<" \n";
		if (v == t.substr(0, v.length())) {
              cout<<v<<"          aywa\n";
			s += t.substr(v.length());
			k--;
		}
		i++;
	}
	cout << s << '\n';
}
