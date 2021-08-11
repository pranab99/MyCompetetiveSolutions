#include<bits/stdc++.h>

using namespace std;

int Sqrt(int x) {

	if (x == 0 || x == 1)
		return x;


	int start = 1, end = x, ans;
	while (start <= end) {
		int mid = (start + end) / 2;


		if (mid * mid == x)
			return mid;


		if (mid <= x / mid) {
			start = mid + 1;
			ans = mid;
		} else
			end = mid - 1;
	}
	return ans;
}

void solve() {

	int n;
	cin >> n;

	cout << Sqrt(n);



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
