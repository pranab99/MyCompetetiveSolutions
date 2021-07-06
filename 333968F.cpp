#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;



void solve() {

	ll n, k, minsum = INT_MAX, index = 0, sum = 0,j=0;

	cin >> n >> k;



	vector<int> v;
	for(int i = 0; i < n; i++) {

		int a;
		cin >> a;
		v.push_back(a);
		sum+=a;

		if(i-j+1==k)
		{
			if(sum<minsum)
			{
				minsum=sum;
				index=j;
			}
			sum-=v[j];
			j++;
		}


	}


	

	cout << index+1;


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
