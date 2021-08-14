#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
    float pow_10 = pow(10.0f, (float)prec);
    return round(value * pow_10) / pow_10;
}

void solve() {


    ll int n, m, add = 0;
    cin >> n >> m;
    ll  a[n + 1];
    for (int i = 1; i <= n; ++i) {

        cin >> a[i];

    }

    while(m--) {
        int choice;
        cin >> choice;
        if(choice == 1) {
            ll int vi, xi;
            cin >> vi >> xi;
            a[vi] = xi - add;
        }
        if(choice == 2) {
            ll int yi;
            cin >> yi;
            add += yi;
        }

        if(choice == 3) {
            ll int qi;
            cin >> qi;
            cout << a[qi] + add << "\n";

        }
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
