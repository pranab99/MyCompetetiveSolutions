#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n,lasthighest=0,lastsmallest=0;
	cin >> n;    //user input
	int a[n];
	for (int i = 0; i < n; ++i) 
	{
		a[i] = (rand() % n) + 1; // generated array with random numbers upto n.
	}

	cout<<"The array is:\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
    
    /* My approach is to sort the array and print the 1st index(array starts at position 0) 
      and second last index (n-2). This would take O(n log n ) time compexity and no extra space.*/

	int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
 
        
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
	
    
	lastsmallest=a[1];
	lasthighest=a[n-2];
     cout<<"\n";

      

    cout<<"Second Smallest: "<<lastsmallest<<" "<<"Second Highest: "<<lasthighest;



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
