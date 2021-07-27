#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	ll n;
	cin >> n;

	ll r1[n], r2[n], r3[n], r4[n], r5[n];
	for (int i = 0; i < n; ++i) {
		cin >> r1[i] >> r2[i] >> r3[i] >> r4[i] >> r5[i];

	}
	if(n == 1) {
		cout << 1;
		return;
	}
	ll winning[n];
	ll max1 = r1[0],max2=r2[0],max3=r3[0],max4=r4[0],max5=r5[0],index1=0,index2=0,index3=0,index4=0,index5=0;
	for (int i = 0; i < n;  ++i) {
         if(r1[i]>max1)
		 {
		 	max1=r1[i];
		 	index1=i+1;
		 }
		 if(r2[i]>max2)
		 {
		 	max2=r1[i];
		 	index2=i+1;
		 	
		 }
		 if(r3[i]>max3)
		 {
		 	max3=r1[i];
		 	index3=i+1;
		
		 }
		 if(r4[i]>max4)
		 {
		 	max4=r1[i];
		 	index4=i+1;
	
		 }
		 if(r5[i]>max5)
		   {
		 	max5=r1[i];
		 	index5=i+1;
		 	
		   }



		}

		cout<<index1<<index2<<index3<<index4<<index5;





}





signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef Pranab
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;

	while(t--) {
		solve();
		cout << "\n";
	}

	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

	return 0;
}
