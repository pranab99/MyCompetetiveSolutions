#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
# define NO_OF_CHARS 256
using namespace std;

void solve() {

	ll n, m, flag = 0, j = 1;
	cin >> n >> m;
	ll d[m], a[n];

	for (int i = 0; i < m; ++i)
	{
		cin>>d[i];
	}
    sort(d,d+m);

    if(d[0]==1 || d[m-1]==n)
    {
    	cout<<"NO";
    	return;
    }

    std::vector<ll> v(m);

    for (int i = 0; i < m - 2; ++i)
        if (d[i] + 1 == d[i + 1] && d[i + 1] + 1 == d[i + 2])
        {
                flag=1;
                break;        
            }

	

	if(flag == 0)
		cout << "YES";
	else
		cout << "NO";

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
