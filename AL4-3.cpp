#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void findMinAndMax(int arr[], int low, int high, int &min, int &max) {
	
	if (low == high) {                  
		if (max < arr[low]) {           
			max = arr[low];
		}

		if (min > arr[high]) {          
			min = arr[high];
		}

		return;
	}


	if (high - low == 1) {              
		if (arr[low] < arr[high]) {     
			if (min > arr[low]) {      
				min = arr[low];
			}

			if (max < arr[high]) {      
				max = arr[high];
			}
		} else {
			if (min > arr[high]) {      
				min = arr[high];
			}

			if (max < arr[low]) {      
				max = arr[low];
			}
		}
		return;
	}

	// find the middle element
	int mid = (low + high) / 2;

	// recur for the left subarray
	findMinAndMax(arr, low, mid, min, max);

	// recur for the right subarray
	findMinAndMax(arr, mid + 1, high, min, max);
}
void solve() {

    int n;
    cin>>n;
    int arr[n];
    cout<<"The array is \n";
    for(int i = 0; i < n; i++) {
		arr[i] = (rand() % n) + 1;
		cout<<arr[i]<<" ";
	}
    int m = sizeof(arr) / sizeof(arr[0]);

    int max = INT_MIN, min = INT_MAX;
 
    findMinAndMax(arr, 0, m - 1, min, max);
 
    cout << "\nThe minimum array element is " << min << endl;
    cout << "The maximum array element is " << max;
 

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
