#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

ll s,t,ct=0;
cin>>s>>t;

for (int i = 0; i <=s ; ++i)
{
  for( int j=0 ; j<=s ; ++j){
  	for (int k = 0; k <=s; ++k)
  	{
  	 if(i+j+k<=s && i*j*k<=t)
  	 	ct++;
  	}
  }
}

cout<<ct;

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
