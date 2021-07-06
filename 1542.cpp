#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	ll n,ct=0;
	cin>>n;

  std::vector<int> v;

  for (int i = 0; i < 2*n; ++i)
  {
  	int a;
  	cin>>a;
  	v.push_back(a);
  }
  

  for (int i = 0; i < 2*n-1; i+=2)
    {
    	if((v[i]+v[i+1])&1)
    		ct++;
    }  

    if(ct==n)
    	cout<<"Yes";
    else
    	cout<<"No";
  

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
