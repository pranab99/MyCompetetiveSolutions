#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	ll n, ct = 0;
	cin >> n;
	string o, a;
	cin >> o >> a;
	for (int i = 0; i < n; ++i) {

		if(i < n - 1) {
			if(o[i] == '1' && a[i + 1] == '1' )
				ct++;


		}


		if(a[i] == '1' && o[i] == '0')
			ct++;


	}

	if(a[n - 1] == '1' && o[n - 2] == '1')
		ct++;
	cout << ct;

}





signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef Pranab
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;

	while(t--) {
		solve();
		cout << "\n";
	}

	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

	return 0;
}
