#include<bits/stdc++.h>
using namespace std;

//Euclid algo

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


void solve() {

	int a,b;
	cin>>a>>b;

	cout<<gcd(a,b);


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
