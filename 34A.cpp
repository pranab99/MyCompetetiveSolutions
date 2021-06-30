#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}

void solve() {
	ll n,minsum=INT_MAX,ind1=0,ind2=0;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		
	} 


	for (int i = 0; i < n-1; ++i)
	{   
		
			if(abs(a[i+1]-a[i])<minsum)
			{ 
				minsum=abs(a[i+1]-a[i]);
                ind1=i+1;
                ind2=i+2;
			}
		
	}


	if ( abs(a[n-1]-a[0]) < minsum )
    cout<<n<<" "<<1;
    else 
    cout<<ind1<<" "<<ind2;

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