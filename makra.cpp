#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	int s;
	cin >> s;
	if(s >= 30 && s <= 50) {
		cout << 'D';
	} else if(s > 50 && s <= 60)
		cout << 'C';
	else if(s > 60 && s <= 80)
		cout << 'B';
	else if(s > 80 && s <= 100)
		cout << 'A';

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
