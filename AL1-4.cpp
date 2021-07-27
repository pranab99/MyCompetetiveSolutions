#include<bits/stdc++.h>
using namespace std;

void solve() {

	int a,b,c;
	cin>>a>>b>>c;

	int temp2,temp3;

    temp2=b;
    temp3=c;
    swap(a,b);
    swap(a,temp3);
    swap(c,temp2);

    cout<<a<<" "<<b<<" "<<c;
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
