#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
 
float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}
 
 
 
void solve() {
 
	int n;
	cin>>n;
	int a[n],no=0,zo=0;
	for (int i = 0; i < n; ++i)
	{
	   cin>>a[i];
	  if(a[i]==5)no++;
	  if(a[i]==0)zo++;

	}
  
  if(90%(5*no)==0)
  	cout<<no;
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