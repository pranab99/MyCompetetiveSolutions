#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	int n, suma = 0, sumb = 0, m = 0;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		suma += a[i];

	}

	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		sumb += b[i];
	}

	if(suma == sumb) {

		for(int i = 0 ; i < n; i++) {

			if(a[i] >= b[i]) {
				m += a[i] - b[i];
			}

		}
		cout<<m<<"\n";

	  for (int i = 0; i < n; ++i)
	  {
	    if(a[i]<b[i])
	    {
	    	while(a[i]!=b[i])
	    	 {
	    	 	a[i]++;
	    	 	cout<<i;
	    	 }	 
	    }
	    else
	    	break;

	  }

	  for(int j=i+1;j < n;j++)
	  {
          
        

	  }




	}

	else {
		cout << -1;
		return;

	}
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
