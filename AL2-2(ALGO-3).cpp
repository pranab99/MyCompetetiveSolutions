#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {

			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}


	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}
int gcd(int a, int b) { //Euclidian Theorem


	if(b == 0)
		return a;
	else
		return gcd(b, a % b);


}

void solve() {

	int n1, n2;
	cin >> n1 >> n2;
	cout << "Prime factors of n1\n";
	SieveOfEratosthenes(n1);
	cout << "\nPrime factors of n2\n";
	SieveOfEratosthenes(n2);

	cout << "\nGCD is\n";
	cout << gcd(n1, n2);


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
