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
	ll a[n];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if(i == j)continue;
			if((a[i]*a[j]) == (i + j)) {
				
				ct++;
			}
		}
	}


	if(n == 2) {
		if(a[2]*a[1]==1+2)
			cout<<1;
	}
	else
	{if(ct&1)
	 cout<<ct/2 +1;
	 else
	 	cout<< ct/2;
    }

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