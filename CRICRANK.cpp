#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	ll r1,w1,c1,r2,w2,c2;
	cin>>r1>>w1>>c1>>r2>>w2>>c2;
    
    if(((r1>r2)&&(w1>w2))||((r1>r2)&&(c1>c2))||((w1>w2)&&(c1>c2))||( r1>r2 && w1>w2 && c1>c2))
    	cout<<"A";
    else
    	cout<<"B";

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
