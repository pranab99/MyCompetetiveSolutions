#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void longestCommonSubsequence( string A, string B, int m, int n ) {
	int L[m + 1][n + 1];

	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (A[i - 1] == B[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;
			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}


	int index = L[m][n];

	char lcs[index + 1];
	lcs[index] = '\0';


	int i = m, j = n;
	while (i > 0 && j > 0) {

		if (A[i - 1] == B[j - 1]) {
			lcs[index - 1] = A[i - 1];
			i--;
			j--;
			index--;
		}


		else if (L[i - 1][j] > L[i][j - 1])
			i--;
		else
			j--;
	}


	cout << "LCS of " << A << " and " << B << " is " << lcs;
	cout<<"\nThe length of the LCS is :"<<L[m][n];
}


void solve() {
	string a, b;
	cin >> a >> b;
	int m, n;
	m = a.length();
	n = b.length();


	longestCommonSubsequence( a, b, m, n );
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
