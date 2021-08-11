#include<bits/stdc++.h>
using namespace std;

void occuranceCount(int a[],int n)
{   int ct=0;
	cout<<"The nos. which have greater occurance than n/2 are\n";
	for (int i = 0; i < n-1; ++i)
	{    
		 ct=0;
		for( int j = i+1 ; j < n ; j++)
		{
		
            if(a[i]==a[j])
          	 ct++;
           
		}

		if(ct>=n/2)
			{cout<<a[i];
				i+=ct+1;}
		
	}



}

void solve() {

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
  		cin>>a[i];
	}

	sort(a,a+n);
	occuranceCount(a,n);
    

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
