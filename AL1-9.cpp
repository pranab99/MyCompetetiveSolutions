#include<bits/stdc++.h>
using namespace std;

int Squroot(int x)
{
    
    if (x == 0 || x == 1)
    return x;
  
    int i = 1, res = 1;
    while (res <= x)
    {
      i++;
      res = i * i;
    }
    return i - 1;
}


void solve() {

	int n;
	cin>>n;
	cout<<"The square root of "<<n<<" is "<<Squroot(n);




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
