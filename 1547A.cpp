#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {


	int xa, ya, xb, yb, xf, yf, dis;
	cin >> xa >> ya >> xb >> yb >> xf >> yf;

	dis = abs(xa - xb) + abs(ya - yb);
	
	if(xa != xb && ya != yb) {
		cout << dis;
	} else if(dis == abs(xa - xf) + abs(ya - yf) + abs(xb - xf) + abs(yb - yf))
		cout << dis + 2;
	else
		cout << dis;


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
