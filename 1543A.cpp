#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
 
float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}
 
 
 
void solve() {
 
	ll a, b;
	cin >> a >> b;
	if(a == b)
		cout << 0 << " " << 0;
	else  {
		ll dif = abs(a - b);
		cout << dif << " " << min(b % dif, dif - b % dif);
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
	cin>>t;
 
	while(t--) {
		solve();
		cout << "\n";
	}
 
	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
 
	return 0;
}