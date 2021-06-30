#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}

void solve() {
	ll n, min = INT_MAX, count = 0, index = 0;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	min = *min_element(a, a + n);
	for (int i = 0; i < n; ++i) {
		if(a[i] == min) {
			count++;
			index = i + 1;

		}
	}

	if(count > 1)
		cout << "Still Rozdil";
	else
		cout << index;

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