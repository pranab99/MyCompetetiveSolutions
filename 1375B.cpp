#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}


void solve() {

	int n, m, totNeighbours = 0;
	cin >> n >> m;
	int a[n + 1][m + 1];
	for (int i = 1; i <= n; ++i) {
		for(int j = 1 ; j <= m; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; ++i) {
		for(int j = 1 ; j <= m; ++j) {
			if(i - 1 >= 1)totNeighbours++;
			if(j - 1 >= 1)totNeighbours++;
			if(i + 1 <= n)totNeighbours++;
			if(j + 1 <= m)totNeighbours++;

			if(totNeighbours < a[i][j]) {
				cout << "NO\n";
				return;
			} else
				a[i][j] = totNeighbours;
			totNeighbours = 0;
		}
	}
	cout << "YES\n";
	for (int i = 1; i <= n; ++i) {
		for(int j = 1 ; j <= m; ++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
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

	}

	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

	return 0;
}
