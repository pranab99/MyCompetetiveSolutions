#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	int n, ct = 0,z;
	cin >> n;
	int a[n];
	for (int i = 0; i < n ; ++i) {
		cin >> a[i];
	}

	if(n == 1) {
		cout << 1;
		return;
	}
	int maximumWater = INT_MIN;
	for(int i = 0; i < n ; ++i) {
		ct = 1;// to include the value of i
		 z = i;
		for(int j = i + 1; j < n; ++j) {
			if(a[j] <= a[z])ct++;
			else {
				break;
			}
			z++;

		}

		z = i;

		for(int k = i - 1; k >= 0 ; --k) {

			if(a[k] <= a[z])ct++;
			else
				break;
			z--;


		}

		maximumWater = max(ct, maximumWater);
		
	}

	cout << maximumWater;

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
