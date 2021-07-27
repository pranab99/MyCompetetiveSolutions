#include<bits/stdc++.h>
#define mod 1000000007
#define ll long loung
using namespace std;


void solve() {

  int n;
  cin>>n;
  int p=n/3;
  n-=3*p;
  if(n==0)
  {
  	cout<<p<<" "<<p;
  }
  else if(n==1)
  {
  	cout<<p+1<<" "<<p;

  }
  else
  	cout<<p<<" "<<p+1;
  


}




signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef Pranab
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	 cin>>t;

	while(t--) {
		solve();
		cout << "\n";
	}

	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

	return 0;
}
