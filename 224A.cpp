#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}

void solve() {

   ll s1,s2,s3,a,b,c;
   cin>>s1>>s2>>s3;
    
   a=sqrt(s1*s3/s2);
   b=sqrt(s1*s2/s3);
   c=sqrt(s2*s3/s1);
  
   cout<<a*4+b*4+c*4;



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