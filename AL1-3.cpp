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

 // My approach 1

         // I take another array and  enter the odd elements to it at first and then even 
          // I can do this by taking a counter variable and increasing the value of b every time it stores 
          //an odd number and then another loop for even number
     int b[n];
     int pointer=0;


     for( int i=0;i<n;i++){

     	if(a[i]%2!=0)
     	{
     		b[pointer]=a[i];
     		pointer++;
     	}

     }

     for (int i = 0; i < n; ++i)
     {
     	 if(a[i]%2==0)
     	 {

     		b[pointer]=a[i];
     		pointer++;
     	 }

     }


     for (int i = 0; i < n; ++i)
     {
     	cout<<b[i]<<" ";
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
