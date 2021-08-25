#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {
	int n, a, ct = 0, iterations = 0;
	cin >> n >> a;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
	}


	if(arr[a - 1] == 1)ct = 1;
	else ct = 0;
	arr[a - 1] = 0;
	int z = a - 1;
	for (int i = 1; i < n; ++i) {
		int right, left;
		right = z + i;
		left = z - i;
		if(left >= 0 || right < n) {
			if(left >= 0 && right < n) {
				if(arr[left] && arr[right])ct += 2;
			} 
			else if(left>=0){
				if(arr[left])ct++;
			}
			else if(right<n){
				if(arr[right])ct++;
			}
		}
	}


	cout << ct;


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
