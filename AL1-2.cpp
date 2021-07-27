#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n, ct = 0, maxrepeatele = 0, maxct = 0, totaldupli = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {

		a[i] = (rand() % n) + 1;
	}

	cout << "The array is \n";
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < n; ++i) {

		for(int j = 0; j < n ; j++) {

			if(i == j)continue;

			if(a[i] == a[j]) {
				ct++;
			}


		}


		if(ct > maxct) {
			maxct = ct;
			maxrepeatele = a[i];
			totaldupli++;

		}

		ct = 0;
	}


	cout << "Total duplicates =" << totaldupli << "\n";
	cout << "Most Repeating element= " << maxrepeatele;


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
