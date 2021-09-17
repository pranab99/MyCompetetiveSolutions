#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}

void replacePi(string s) {

	if(s.length() == 0) {       // base case
		return;
	}

	if(s[0] == 'p' && s[1] == 'i') {
		cout << "3.14";

		string remaining = s.substr(2); //remaining substring

		replacePi(remaining);
	} else {
		cout << s[0];
		replacePi(s.substr(1));
	}


}


void solve() {

	string s;
	cin >> s;

	int length = s.length();
	replacePi(s);


}





signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef Pranab
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	// cin>>t;

	while(t--) {
		solve();
		cout << "\n";
	}

	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

	return 0;
}
