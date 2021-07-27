#include<bits/stdc++.h>
using namespace std;

int divi(int a, int b)
{
	return a/b;
}

int max(int a, int b)
{
     int m,n,l=2;
     m=a+b+abs(a-b);
     
     n=divi(m,l);

    
     return n ;
}


void solve() {

	int a,b;
	cin>>a>>b;

	cout<<"The maximum between two numbers is "<<max(a,b);
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
