#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n,ct=0;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		if(n%i==0)
			ct++;
	}

	if(ct==2)
		cout<<"The no. is Prime";
	else
		cout<<"The no. is not Prime";



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
