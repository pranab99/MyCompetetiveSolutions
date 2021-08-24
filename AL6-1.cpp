#include<bits/stdc++.h>
using namespace std;


void maxHeaping(int arr[], int n, int root) {
	int largest = root;
	int l = 2 * root + 1;
	int r = 2 * root + 2;


	if (l < n && arr[l] > arr[largest])
		largest = l;


	if (r < n && arr[r] > arr[largest])
		largest = r;


	if (largest != root) {
		swap(arr[root], arr[largest]);


		maxHeaping(arr, n, largest);
	}
}


void heapSort(int arr[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--)
		maxHeaping(arr, n, i);


	for (int i = n - 1; i >= 0; i--) {

		swap(arr[0], arr[i]);
		maxHeaping(arr, i, 0);
	}
}



void solve() {

     int ch;
    
     cin>>ch;
     
     switch(ch)
     {
     	case 0:

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
