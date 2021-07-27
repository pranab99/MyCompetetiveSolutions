#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,min=INT_MAX,max=INT_MIN;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        a[i]=(rand()%n)+1;

      
    }

    cout<<"The array is \n";
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    for (int i = 0; i <n; ++i)
    {
      
      if(a[i]<=min)
            min=a[i];

        if(a[i]>=max)
            max=a[i];
    }


    cout<<"min="<<min<<"   max="<<max;


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
