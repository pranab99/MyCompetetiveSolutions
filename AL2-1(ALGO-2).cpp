#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n;
	cin>>n;
	for (int i = 2; i*i < n ; ++i)
	{
	    if(n%i==0)
	      {cout<<"The no is not prime";
	        return;
	      }
	}

   cout<<"The number is prime";

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
