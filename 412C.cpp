#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


void solve() {

	ll i, j, k;
	ll n;
	string s, t;

	cin >> n;
	cin >> t;
	for(i = 1; i < n; i++) {
		cin >> s;

		for(j = 0; j < s.length(); j++) {
			if(s[j] != '?' && t[j] == '?' && t[j] != '$')
				t[j] = s[j];

			else if(s[j] != '?' && t[j] != '?' && s[j] != t[j])
				t[j] = '$';
		}
	}

	for(i = 0; i < t.length(); i++) {
		if(t[i] == '$')
			t[i] = '?';

		else if(t[i] == '?')
			t[i] = 'r';
	}

	cout << t;
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
