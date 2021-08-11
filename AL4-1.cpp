#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


int binarySearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}


	return -1;
}

void solve() {

	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; ++i) {
		a[i] = (rand() % n) + 1;
	}

	sort(a, a + n);

	cout << "The array is\n";
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	
    x=rand()%n+1;
    cout<<"\n";
	cout<<"Let the chosen element be "<<x;

	cout << "\n";
	if(binarySearch(a, 0, n - 1, x) == -1) {
		cout << "Element is not presrnt in the array";
	} else {
		cout << "Element is present in the array at index " << binarySearch(a, 0, n - 1, x) + 1 ;
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
