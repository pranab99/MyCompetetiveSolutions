#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	int n, k, windowSum = 0, minSum = INT_MAX;
	cin >> n >> k;
	int arr[n];
	for( int i = 0; i < n; i++) {
		cin >> arr[i];
	}



	for(int i = 0 ; i < k ; i++) {
		windowSum += arr[i];

	}



		minSum = windowSum;
		int index=k-1;
		



	for(int i = k ; i < n; i++) {
		windowSum += arr[i];
		windowSum -= arr[i - k];

		if(windowSum < minSum) {
			minSum = windowSum;
			index = i;
		}

	

	}


	cout << index-k+2;




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
