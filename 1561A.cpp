#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}

void f(vector<int> &v, int start) {
	if(v[start] > v[start + 1] and start + 1 < v.size())
		swap(v[start], v[start + 1]);
}



void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;

	int ans = 0;
	int start = 1;
	if(is_sorted(v.begin(), v.end())) {
		cout << 0 << endl;
		return;
	}
	while(!is_sorted(v.begin(), v.end())) {
		if(start & 1) {
			for(int k = 0; k < n - 1; k++) {
				if(k % 2 == 0) {
					f(v, k);
				}
			}
		} else {
			for(int k = 0; k < n; k++) {
				if(k % 2 == 1) {
					f(v, k);
				}
			}
		}
		start++;
		ans++;
	}

	cout << ans ;



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
