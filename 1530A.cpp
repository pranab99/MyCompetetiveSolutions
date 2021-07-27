#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;



void solve() {
	
   ll n;
   cin>>n;
   ll maxi=0;
   while(n>0){
   	 ll d=n%10;
   	 maxi=max(d,maxi);
   	 n/=10;

   }
   cout<<maxi;


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
