#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}


void solve() {
	string s;
	cin >> s;
	ll n, ct = 0,ans=0;
	n = s.length();
	if(n<2){cout<<0; return;}
	else if(n % 2 == 0) {
		for (int i = 0; i < n/2; ++i) {
			for(int j = 0 ; j < n; j++) {
				if(i == j)continue;
				if(s[i] == s[j]) {
					if((i % 2 == 0) && (j % 2 == 0))
						ct++;
					if((i % 2 != 0) && (j % 2 != 0))
						ct++;
				}
			}
		}
	} 
	else {
		for (int i = 0; i < n/2; ++i) {
			for(int j = 0 ; j < n - 1; j++) {
				if(i == j)continue;
				if(s[i] == s[j]) {
					if((i % 2 == 0) && (j % 2 == 0))
						ct++;
					if((i % 2 != 0) && (j % 2 != 0))
						ct++;
				}
			}
		}
	}
    
    ans=ceil((n - ct/2) / 2);
    cout<<ans;
	
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