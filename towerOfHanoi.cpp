#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;



void towerOfHanoi(int n,char src,char dest,char helper){

	if(n==0)return; //base case
	towerOfHanoi(n-1,src,helper,dest);
	cout<<"Move from "<<src<<" to "<<dest<<endl;
	towerOfHanoi(n-1,helper,dest,src);

}



void solve() {

    towerOfHanoi(3,'A','C','B');

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
