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
	int a[n],f=0,z=0;
	for (int i = 0; i < n; ++i)
	{
	   cin>>a[i];
	  if(a[i]==5)f++;
	  if(a[i]==0)z++;

	}
  
      if(f==n)
      	cout<<-1;
      else
      {
      	string maxi;
      	int ct=f/9*9;
      	while(ct--)maxi+="5";
      	if(!maxi.empty())
      	{ 
      		int m=z-1;
      		while(m--)
      		{
      			maxi+="0";
      		}
      	}
         maxi+="0";
      	cout<<maxi;

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
	//cin>>t;
 
	while(t--) {
		solve();
		cout << "\n";
	}
 
	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
 
	return 0;
}