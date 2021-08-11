#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	ll int n, small = 0, medium = 0, large = 0;
	cin >> n;

		large += n / 10;
		n = n % 10;
		if(n % 10 != 0) {
			if(n <= 6) {
				small++;

			}
			if(n > 6 && n <= 8) {
				medium++;
			}
			if(n > 8 && n <= 10) {
				large++;
			}
		}

	cout << small * 15 + medium * 20 + large * 25;


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
