#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}

void solve() {
	ll n, i, s = 0;
	cin >> n;
	ll a[7];
	for ( int j = 0; j < 7; ++j) {
		cin >> a[j];
	}
	while(n != 0) {
		for ( i = 0; i < 7; ++i) {
			n -= a[i];

			if(n <= 0) {
				n = 0;
				break;
			}
		}


	}
	
		cout << i + 1;

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

/*#include <iostream>
using namespace std;

int main()
{
    int n, i(0), a[7];
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> a[i];
    int t = a[0];

    while (t < n)
    {
        i++;
        i %= 7;
        t += a[i];
    }

    cout << i + 1 << endl;
    return 0;
}
*/