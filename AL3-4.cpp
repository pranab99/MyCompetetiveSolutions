#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n,m=0,maxsum=INT_MIN,l=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
	  cin>>a[i];
	}

   int largest=a[0];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum>largest)
            {
                m=i;l=j;
                largest=sum;
            }
        }
    }
 
    cout<<"\n"<<" The largest array is";
    for(int z=m;z<=l;z++)
    {
        cout<<a[z];
    }
    cout<<"\n"<<" The sum is:";
    cout<<largest;
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
