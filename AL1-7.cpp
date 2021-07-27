#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	if(n%2==0){

	   for (int i = 1; i < n; i+=2){

	   	swap(a[i-1],a[i]);
       	} 
   }

   else
   {
   	 for (int i = 1; i < n-1; i+=2)
   	 {
   	 	swap(a[i-1],a[i]);
   	 }
   }

   cout<<"The required swapped array is\n";
   for (int i = 0; i < n; ++i)
   {
     cout<<a[i]<<" ";
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
	// cin>>t;

	while(t--) {
		solve();
		cout << "\n";
	}

	cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

	return 0;
}
